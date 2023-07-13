#ifndef Family_H
#define Family_H

#include <iostream>
#include "Person.h"
#include <vector>

class Family {
    private: 
        int num_people; 
        int num_address; 
        
    public:
        vector<Person> listPeople; //public then to addFamily function, can accessed
        Family(int num_people, int num_address);
        void getMember();
        ~Family();
};

#endif