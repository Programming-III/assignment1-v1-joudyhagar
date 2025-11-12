#ifndef MAMMAL_H
#define MAMMAL_H

using namespace std;

class Mammal : public Animal
{
    private:
        string furColor;

    public :
        Mammal(string n , int a , bool i , string f) ;

};

#endif // MAMMAL_H
