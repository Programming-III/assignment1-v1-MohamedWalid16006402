#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {
public:
    
    Enclosure(int capacity) : capacity(capacity), currentCount(0) {
        animals = new Animal*[capacity];  
    }

    
    virtual ~Enclosure() {
        for (int i = 0; i < currentCount; ++i) {
            delete animals[i];  
        }
        delete[] animals;  
    }

    
    void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount++] = a;  
        } else {
            cout << "Enclosure is full, cannot add more animals." << endl;
        }
    }

    
    void displayAnimals() {
        if (currentCount == 0) {
            cout << "No animals in the enclosure." << endl;
        } else {
            for (int i = 0; i < currentCount; ++i) {
                animals[i]->display();  
            }
        }
    }

protected:
    Animal** animals;  

private:
    int currentCount; 
    int capacity;      
};

#endif 
