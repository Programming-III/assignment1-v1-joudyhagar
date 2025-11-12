#ifndef VISITOR_H
#define VISITOR_H

using namespace std;

class Visitor 
{
    private:
        string visitorName;
        int ticketsBought;

    public :
        Visitor(string vn , int tb);
        void displayInfo();

};

#endif // VISITOR_H
