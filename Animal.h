
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal(string name, int age, bool isHungry) 
        : name(name), age(age), isHungry(isHungry) {}

    void display() {
        cout << "Animal: " << name << ", Age: " << age << ", Hungry: " << (isHungry ? "Yes" : "No") << endl;
    }

    void feed() {
        if (isHungry) {
            isHungry = false;
            cout << name << " has been fed!" << endl;
        } else {
            cout << name << " is not hungry." << endl;
        }
    }

    
    string getName() { return name; }
    int getAge() { return age; }
    bool getIsHungry() { return isHungry; }
    void setName(string newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setIsHungry(bool hungerStatus) { isHungry = hungerStatus; }
};


#endif // ANIMAL_H




