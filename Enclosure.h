#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"

using namespace std;

class Enclosure 
{
    private:
        Animal*[capacity] arrayA ;
        int capacity;
        int currentCount;

    public :
        Enclosure(int c , int CC);
        void addAnimal(Animal* a);
        void displayAnimals();

};

#endif // ENCLOSURE_H
