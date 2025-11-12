#include <iostream>
#include <string>
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"

using namespace std;

class Main {
public:
    Main() {
        
        Animal* lion = new Mammal("lion", 5, true, "yellow");
        Animal* parrot = new Bird("parrot", 2, false, 1.5f);
        Animal* snake = new Reptile("snake", 3, true, true);

        /
        Enclosure* enclosure = new Enclosure(3);  
        enclosure->addAnimal(lion);
        enclosure->addAnimal(parrot);
        enclosure->addAnimal(snake);

        
        cout << "Enclosure 1 Animals:" << endl;
        enclosure->displayAnimals();
        
        
        Visitor* visitor = new Visitor("Sara Ali", 3);

        
        cout << "Visitor info:" << endl;
        visitor->displayInfo();

        
        delete enclosure;  
        delete visitor;
    }

    virtual ~Main() {}

protected:

private:
};

int main() {
    Main app;
    return 0;
}
