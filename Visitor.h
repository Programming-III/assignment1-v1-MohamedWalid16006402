
#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string> 

using namespace std;

class Visitor {
public:
   
    Visitor(string name = "Unknown", int tickets = 0) 
        : vistorName(name), ticketsBought(tickets) {}

    
    virtual ~Visitor() {}

    
    void displayInfo() const {
        cout << "Visitor Name: " << vistorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }

    
    string getVistorName() const { return vistorName; }
    void setVistorName(const string& name) { vistorName = name; }

    int getTicketsBought() const { return ticketsBought; }
    void setTicketsBought(int tickets) { ticketsBought = tickets; }

protected:
    string vistorName;
    int ticketsBought;
};

#endif 



