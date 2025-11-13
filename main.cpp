#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
// 1. OOP Grunder - tänk! Leta SUBSTANTIV - vi spånar webshop
// ShoppingCart
// Product
// Customer
// ShoppingCart cart;
// cart.add(product);
// 2. structs vs classes vs objects
/// CLASS = ritning (blueprint)
// instansiera/bygga en SAK från en ritning
//     => objekt

// 3. vi kör Stefans OOP Dinner
//          det finns människor i Stefans hus
//          människor har
//                       - level (0 till att börja med)
//                       - namn
//          människor kan
//                       - agera (antingen äta, dricka eller rapa)
//                       - levla upp (om man rapar tre gånger på raken så levlar man upp en nivå)
// 4. Inkapsling
// 5. I vector...

// 6. ÖVERKURS kl 13:00 arv
//         det finns också ... FLUGOR

class Human {
private:
    // internals
    int burpsInARow = 0;
public:
    int level;
    std::string name;
    int age;
    // skriver metoder (funktioner) inuti klassen
    void act(){
        std::string actions[]={"eats","drinks","burps"};
        int index = rand()%3;   
        if(actions[index] == "burps"){
            burpsInARow++;
        }else{
            burpsInARow = 0;
        }
        std::cout << name << " " << actions[index] << std::endl;
    }
    void mightLevelUp(){
        if(burpsInARow == 3){
            level++;
            std::cout << name << " leveled up to " << level << std::endl;
            burpsInARow = 0;
        }
    }
};



int main(){
    srand((unsigned) time(NULL));
    Human stefan;
    stefan.name = "Stefan";
    stefan.level = 0;
    stefan.age = 53;

    Human kerstin;
    kerstin.name = "Kerstin";
    kerstin.level = 0;
    kerstin.age = 52;

    Human oliver;
    oliver.name = "Oliver";
    oliver.level = 0;
    oliver.age = 17;
   
    

    srand((unsigned) time(NULL));
    //Game loop
    while(true){
        //Alla aktörer gör nåt 
        stefan.act();
        kerstin.act();
        oliver.act();

        //Alla aktörer kanske levlar upp
        stefan.mightLevelUp();
        kerstin.mightLevelUp();
        oliver.mightLevelUp();

        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}