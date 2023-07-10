#ifndef TOWN_H
#define TOWN_H

#include <set>
#include "Family.h"

using namespace std; 
class Town {
    private:    
        int num_Family1;
    public: 
        vector <Family1> listFamilies;
        set <int> tmp_id_card;
        void getFamily1();
        void addFamily1();
        ~Town();
};

#endif