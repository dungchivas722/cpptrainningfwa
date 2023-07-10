#pragma once 
#include <iostream>
#include "Person.h"
#include <vector>

using namespace std; 

class Hotel {
    private:
        vector <Person*> listCustomer;
    public: 
        Hotel();
        
        void add_Customer();
        void delete_Customer();
        void calculate_Payment();
        void exitProgram();
};