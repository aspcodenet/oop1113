#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>
#include "human.h"
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
// 6. inklude CPP och H filer

// 6. ÖVERKURS kl 13:00 arv
//         det finns också ... FLUGOR




int main(){
    srand((unsigned) time(NULL));


    std::vector<GameCharacter *> gameCharacters;
    gameCharacters.push_back(new Human("Stefan",53));
    gameCharacters.push_back(new Human("Kerstin",52));
    gameCharacters.push_back(new Human("Oliver",17));
    gameCharacters.push_back(new Fly("Fluga"));
    //Game loop
    while(true){
        //Alla aktörer gör nåt 
       // C indexbaserade loopar
        // for(int i =0; i <=gameCharacters.size();i++){
        //     gameCharacters[i].act();
        // }
        for(GameCharacter *gameCharacter : gameCharacters){
            gameCharacter->act();
            //std::cout << human.getAge(); 
        }
       //
        

        for(GameCharacter *gameCharacter : gameCharacters){
            gameCharacter->mightLevelUp();
        }
        
        
        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}