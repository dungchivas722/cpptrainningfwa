#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
using namespace std; 
class Family {
    private: 
        int num_people; 
        int num_address; 
        vector<Person*> listPeople;
    public:
        Family();
        Family(int num_people, int num_address);
        void setNum_people(int num_people);
        void setNum_address(int num_address);
        int getNum_people();
        int getNum_address();
        void display();
        void Add_people();
        ~Family();
};