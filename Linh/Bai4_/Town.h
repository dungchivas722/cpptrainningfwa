#ifndef TOWN_H
#define TOWN_H

#include <iostream>
#include <vector>
#include "Household.h"

using namespace std;

enum Option
{
    ENTER = 1,
    EXIT = 0,
    SHOW = 2
};

class Town
{
    private:
        vector <Household> households;

    public:
        Town();
        // Town(vector <Household> households);
        void enterHousehold();
        void showTown() const;
};

#endif /* TOWN_H */

