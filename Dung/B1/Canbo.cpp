#include "Canbo.h"

canbo::~canbo(){} // destructor nếu có

void canbo::nhapthongtin() {
    cout<< "Enter name:"<< endl;
    getline(cin >> ws, name);
    cout<< "Enter age:"<< endl;
    cin >> age;
    cout<< "Enter sex:"<< endl;
    cin.ignore();
    getline(cin >> ws, sex);
    cout<< "Enter address:"<< endl;
    getline(cin >> ws, address);
}

void canbo::xuatthongtin(){
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Sex: " << sex << endl;
    cout << "Address: " << address;
}

string canbo::getname(){
        return this->name;
    }
