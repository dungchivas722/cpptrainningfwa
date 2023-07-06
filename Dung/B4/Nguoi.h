#ifndef NGUOI_H
#define NGUOI_H

#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Nguoi {
    private:
        string name;
        int age;
        string job;
        int cmnd;


    public:
        void nhapThongTin(set<int> &cmndmember);
        void hienThiThongTin();
        string getCMND();
};

#endif
