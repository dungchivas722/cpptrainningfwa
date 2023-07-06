#ifndef __CANBO
#define __CANBO

#include<iostream>
#include<string>

using namespace std;

class CanBo
{
    private:
    string name,address,sex;
    int age;
    public:
    virtual void add_office();
    string getName();
    virtual void get_office();
    virtual ~CanBo();
};

#endif