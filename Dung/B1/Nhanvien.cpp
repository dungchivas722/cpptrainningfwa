#include "Nhanvien.h"

void nhanvien :: nhapthongtin()
{
    canbo :: nhapthongtin();
    cout << "Enter work: ";
    cin >> work;
    cin.ignore();
}

void nhanvien :: xuatthongtin()
{
    canbo :: xuatthongtin();
    cout << "Work: " << this->work << endl;
}