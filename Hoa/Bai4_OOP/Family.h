#ifndef Family1_H
#define Family1_H

#include <iostream>
#include "Person.h"
#include <vector>

class Family1 {
    private: 
        int num_people; 
        int num_address; 
        
    public:
        vector<Person> listPeople; //public then to addFamily1 function, can accessed
        Family1(int num_people, int num_address);
        void getMember();
        ~Family1();
};

#endif