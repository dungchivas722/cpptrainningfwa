#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string.h>

using namespace std;

class Person
{
    private:
        string name;
        int age;
        string personID;
        int rentDays;
        string typeRoom;

    public:
        Person();
        Person(string name, int age, string personID, int rentDays, string typeRoom);
        ~Person();

        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setPersonID(string personID);
        string getPersonID();
        void setRentDays(int rentDays);
        int getRentDays();
        void setTypeRoom(string typeRoom);
        string getTypeRoom();

        void enterInformation();
        void showInformationPerson();
};

#endif /* PERSON_H */