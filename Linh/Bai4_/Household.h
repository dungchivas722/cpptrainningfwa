#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H

#include <vector>
#include "Person.h"

class Household
{
    private:
        vector <Person> members;
        string address;

    public:
        Household(vector <Person> person, string address);
        ~Household();

        void setAddress(string address);
        string getAddress();
        vector <Person> getPerson();

        void showHousehold() const;
};

#endif /* HOUSEHOLD_H */