#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>
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
    int age;
public:
    int level;
    std::string name;

    //constructor parameters = mandatory
    Human(std::string name, int age){
        //name = nameNew;
        this->name = name;
        setAge(age);
        level = 0;
        //std::cout << "Hej" << std::endl;
    }


    // getter
    int getAge(){
        return age;
    }

    // setter
    void setAge(int newAge){
        if(newAge < 0 || newAge > 150){
            throw std::invalid_argument("Argument for age is not valid");
        }
        age = newAge;
    }
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
    Human stefan("Stefan",53);
    Human kerstin("Kerstin",52);
    Human oliver("Oliver",17);

    std::vector<Human> gameCharacters;
    gameCharacters.push_back(stefan);
    gameCharacters.push_back(kerstin);
    gameCharacters.push_back(oliver);

    

    srand((unsigned) time(NULL));
    //Game loop
    while(true){
        //Alla aktörer gör nåt 
       // C indexbaserade loopar
        // for(int i =0; i <=gameCharacters.size();i++){
        //     gameCharacters[i].act();
        // }
        for(Human human : gameCharacters){
            human.act();
            //std::cout << human.getAge(); 
        }
        

        for(Human human : gameCharacters){
            human.mightLevelUp();
        }
        
        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}