#include "Student.h"

void Student::setStudent()
{
    cout << "Nhap ho va ten: ";
    getline(cin,name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cin.ignore();
    cout << "Nhap lop: ";
    getline(cin,grade);
}

void Student::getStudent()
{
    cout << name << "\t\t" << grade << "\t" << age << "\t"; 
}