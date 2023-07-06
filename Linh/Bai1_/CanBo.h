#ifndef CANBO_H
#define CANBO_H

#include <iostream>
#include <string.h>

using namespace std;

class CanBo
{
    protected:
        string name;
        int age;
        string gender;
        string address;

    public:
        CanBo(string name, int age, string gender, string address);
        virtual ~CanBo();

        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setGender(string gender);
        string getGender();
        void setAddress(string address);
        string getAddress();

        virtual void enterInformation();
        virtual void showInformation() const;
};

#endif /* CANBO_H */