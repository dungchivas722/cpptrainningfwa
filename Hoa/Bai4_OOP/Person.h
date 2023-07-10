#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string> 
using namespace std; 
class Person {
private:
    string name; 
    int age; 
    string job;
    int id_card_number;
public: 
    void addPerson();
    void getPerson();
    void setID_card(int id);
};

#endif