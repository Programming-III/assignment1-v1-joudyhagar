#ifndef REPTILE_H
#define REPTILE_H

using namespace std;

class Reptile : public Animal
{
    private:
        bool isVenomous;

    public :
        Reptile(string n , int a , bool i , bool iv);

};

#endif // REPTILE_H
