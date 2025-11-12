#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal
{
    private:
        string name ;
        int age;
        bool isHungry;

    public :
    Animal(string n , int a , bool i);
        void display();
        void feed();

};

#endif // ANIMAL_H
