#ifndef CANBO_H
#define CANBO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class canbo{

    protected:
    string name;
    int age;
    string sex;
    string address;

    public:
    virtual ~canbo(); // huỷ ảo cho các lớp con :)) nhưng lớp con không có cấp phát động nên không cần
    virtual void nhapthongtin();
    virtual void xuatthongtin();
    string getname();

};

#endif