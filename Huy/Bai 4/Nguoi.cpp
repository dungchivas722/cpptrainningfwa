#include "Nguoi.h"

void Nguoi::add()
{
    cin.ignore();
    cout << "Nhap ho va ten: ";
    getline(cin,name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cout <<"Nhap nghe nghiep: ";
    cin.ignore();
    getline(cin,job);
}

void Nguoi::get()
{
    cout <<ID_card << "\t\t" << name << "\t\t" << age << "\t" << job ;
}

void Nguoi::setID(int id)
{
    ID_card = id;
}