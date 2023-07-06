#ifndef HOTEL_H
#define HOTEL_H

#include "Person.h"
#include <vector>

enum Room
{
    ROOMA = 1,
    ROOMB = 2,
    ROOMC = 3
};

class Hotel
{
    private:
        vector <Person> renterList;

    public:
        void addRenter();
        void deleteRenter();
        void calculateBill();
        void showList();

};

#endif /* HOTEL_H */