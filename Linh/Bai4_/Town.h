#ifndef TOWN_H
#define TOWN_H

#include <iostream>
#include <vector>
#include "Household.h"

using namespace std;

enum Option
{
    ENTER = 1,
    EXIT = 0
};

class Town
{
    private:
        vector <Household> households;

    public:
        Town();
        // Town(vector <Household> households);
        void enterData();
        void showTown() const;
};

#endif /* TOWN_H */

