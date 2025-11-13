#ifndef __HUMAN_H
#define __HUMAN_H

#include <string>
#include <iostream>

// DECLARATION void test(int bla);
// och DEFINITION
// void test(int bla){ dfdfd }

// class Mammal{ // Däggdjur
//     // föder levande ungar
//     // diar sina barn
//  virtual void Sound(){};
// };


// class Cat : public Mammal{
//     // mjuka
//     // sura
// void Sound() override { cout << "Mjau" }
// };

// class Dog : public Mammal{
//     // har päls
//     // är snälla
// void Sound() override { cout << "Voff" }
// };
// vector<Mammal> allaDjur;

class GameCharacter{
public:
    int level;
    std::string name;
    virtual void act(){
        std::cout << "Act"<< std::endl;
    }
    virtual void mightLevelUp(){
        
    }

};
class Human : public GameCharacter {
private:
    // internals
    int burpsInARow = 0;
    int age;

public:
    //constructor parameters = mandatory
    Human(std::string name, int age);


    // getter
    int getAge();
    // setter
    void setAge(int newAge);

    // skriver metoder (funktioner) inuti klassen
    void act() override;
    void mightLevelUp() override;
};

class Fly : public GameCharacter{
private:

public:


    //constructor parameters = mandatory
    Fly(std::string name);

    // skriver metoder (funktioner) inuti klassen
    void act() override;
    void mightLevelUp() override;
};




#endif