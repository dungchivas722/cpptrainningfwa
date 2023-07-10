#ifndef __Nguoi
#define __Nguoi

#include<iostream>
#include<string>

using namespace std;
class Nguoi
{
    private:
    string name;
    int age,ID_card;
    public:
    void add_member();
    void get_member();
    int GetID();
    void SetID(int ID_number);


};
#endif