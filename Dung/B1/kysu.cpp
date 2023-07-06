#include "Kysu.h"

void kysu :: nhapthongtin()
{
    canbo :: nhapthongtin();
    cout << "Enter trainning industry: ";
    cin >> trainning_industry;
    cin.ignore();
}

void kysu :: xuatthongtin()
{
    canbo :: xuatthongtin();
    cout << "\nTrainning industry: " << this->trainning_industry << endl;
}