#include "Congnhan.h"

void congnhan :: nhapthongtin()
{
    canbo :: nhapthongtin();
    cout << "Enter level: ";
    cin >> level;
    cin.ignore();
}

void congnhan :: xuatthongtin()
{
    canbo :: xuatthongtin();
    cout << "\nLevel: " << this->level << endl;
}