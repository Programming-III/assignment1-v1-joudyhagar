#ifndef BIRD_H
#define BIRD_H

using namespace std;

class Bird : public Animal
{
    private:
        float wingSpan;

    public :
        Bird(string n , int a , bool i , float w);

};

#endif // BIRD_H
