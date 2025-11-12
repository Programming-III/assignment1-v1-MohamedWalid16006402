#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal(string name, int age, bool isHungry, string furColor)
        : Animal(name, age, isHungry), furColor(furColor) {}

    void display() {
        Animal::display();
        cout << "Fur Color: " << furColor << endl;
    }
};






#endif
