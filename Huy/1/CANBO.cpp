#include "CANBO.h"


void CanBo::add_office()
{
    cin.ignore();
    cout << "Ho va Ten: ";
	getline(cin, name);
	cout << "Tuoi: "; cin >> age;
	cout << "Gioi tinh: "; cin >> sex;
	cin.ignore();
	cout << "Dia chi: ";
	getline(cin, address);
}

void CanBo::get_office()
{
    cout << name << "\t\t" << age << "\t" << sex << "\t" << address;
}

string CanBo::getName() {
	return this->name;
}

CanBo::~CanBo() {

}