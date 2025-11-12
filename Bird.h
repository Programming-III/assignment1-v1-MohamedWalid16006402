#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird(string name, int age, bool isHungry, float wingSpan)
        : Animal(name, age, isHungry), wingSpan(wingSpan) {}

    void display() {
        Animal::display();
        cout << "Wing Span: " << wingSpan << " meters" << endl;
    }
};






#endif
