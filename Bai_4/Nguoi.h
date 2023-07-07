#ifndef __Nguoi
#define __Nguoi

#include<iostream>
#include<vector>
#include<string>
using namespace std;

 class Nguoi
 {
    private:
    string name,job;
    int age,ID_card;
    public:
    void add();
    void get();
    void setID(int id);
 };
#endif