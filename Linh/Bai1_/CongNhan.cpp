#include <iostream>
#include <string.h>
#include "CongNhan.h"

using namespace std;

CongNhan :: CongNhan(string name, int age, string gender, string address, int level) 
    : CanBo(name, age, gender, address), level(level){}

void CongNhan :: setLevel(int level)
{
    this->level = level;
}

int CongNhan :: getLevel()
{
    return this->level;
}

void CongNhan :: enterInformation()
{
    CanBo :: enterInformation();
    cout << "Enter level: ";
    cin >> level;
    cin.ignore();
}

void CongNhan :: showInformation() const
{
    cout << "Worker Information!" << endl;
    CanBo :: showInformation();
    cout << "Level: " << this->level << endl;
}