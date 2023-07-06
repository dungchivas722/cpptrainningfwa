#include "ThiSinh.h"

ThiSinh::~ThiSinh(){}

void ThiSinh::add_student() 
{
	cin.ignore();
	cout << "Ho va Ten: "; getline(cin, name);
	cout << "Dia chi: "; getline(cin, address);
	cout << "Muc uu tien: "; cin >> priority;
}
void ThiSinh::get_student()
{
	cout << ID_number << "\t\t" << name << "\t\t" << address << "\t\t" << priority;
}

int ThiSinh::get_ID_number() {
	return this->ID_number;
}

void ThiSinh::set_ID_number(int ID_number) {
	this->ID_number = ID_number;
}