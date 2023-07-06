#pragma once
#include <vector>
#include <iostream>
#include "Family.h"

using namespace std; 
class Town {
    private:    
        int num_family;
        vector <Family*> listFamilies;
    
    public: 
        Town();
        void setNum_family(int num_family);
        int getNum_family();
        void Add_family();
        void display(); 
        ~Town();
};
