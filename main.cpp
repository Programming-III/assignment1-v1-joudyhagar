#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"


using namespace std;


  Animal :: Animal(string n , int a , bool i){
    name = n; age = a; isHungry = i;
  }
  void Animal :: display(){
    cout << "name : " << name << "age :" << age <<"Hungry :" << isHungry << endl ;
  }
  void Animal ::feed(){
    if (isHungry == true)
    cout << "Hungry";
    else
    cout << "Not Hungry";
  }
  
Mammal :: Mammal(string n , int a , bool i , string f) : Animal(string n , int a , bool i){
    furColor = f;
  }

Bird :: Bird(string n , int a , bool i , float w): Animal(string n , int a , bool i){
  wingSpan = w;
  }
  
Reptile :: Reptile(string n , int a , bool i , bool iv): Animal(string n , int a , bool i){
  isVenomous = iv ;
  }

Enclosure :: Enclosure( int c , int CC){
  arrayA = new Animal*[c]; capacity = c ; currentCount = CC;
  }
  
void Enclosure :: addAnimal (Animal* a){
  int co =0
  if (currentCount != c){
    currentCount ++;
  arrayA[currentCount] = a;
  }
  else
  cout << "full capacity";
}
void Enclosure ::displayAnimals(){
  int count =0;
  while (count < currentCount){
    cout << arrayA[co] -> display();
    count ++;
  }
}

Visitor ::Visitor(string vn , int tb){
  visitorName = vn; ticketsBought = tb;
}

void Visitor :: displayInfo(){
  cout << "Visitor info : " << endl << "Name:" <<  visitorName <<endl << "tickets Bought : " << ticketsBought << endl;
}


int main (){
  
  Animal Lion ("lion", 5 , true);
  Animal Parrot ("Parrot", 2 , false);
  Reptile Snake ("Snake", 3,true , true);
  Animal*[] a = {Lion , Parrot , Snake};
  
  Enclosure e (a , 100 ,3);
  e.displayAnimals();
  
  Visitor sara("Sarah Ali", 3);
  sara.displayInfo();
  
  return 0;
}

