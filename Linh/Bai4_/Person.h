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
        string job;
        string personID;

    public:
        Person(string name, int age, string job, string personID);
        ~Person();

        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setJob(string job);
        string getJob();
        void setPersonID(string personID);
        string getPersonID();
        
        void showPerson() const;
};

#endif /* PERSON_H */