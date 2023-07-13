#ifndef TOWN_H
#define TOWN_H

#include <set>
#include "Family.h"

using namespace std; 
class Town {
    private:    
        int num_Family;
    public: 
        Town();
        vector <Family> listFamilies;
        set <int> tmp_id_card;
        void getFamily();
        void addFamily();
        ~Town();
};

#endif