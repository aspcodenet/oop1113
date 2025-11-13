#ifndef __HUMAN_H
#define __HUMAN_H

#include <string>

// DECLARATION void test(int bla);
// och DEFINITION
// void test(int bla){ dfdfd }

class Human {
private:
    // internals
    int burpsInARow = 0;
    int age;
public:
    int level;
    std::string name;

    //constructor parameters = mandatory
    Human(std::string name, int age);


    // getter
    int getAge();
    // setter
    void setAge(int newAge);

    // skriver metoder (funktioner) inuti klassen
    void act();
    void mightLevelUp();
};




#endif