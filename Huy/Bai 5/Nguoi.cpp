#include "Nguoi.h"

void Nguoi::add_member()
{
    cin.ignore();
    cout << "Ho va Ten: "; getline(cin, name);
	cout << "Tuoi: "; cin >> age;
}

// void Nguoi::get_member() {
// 	cout << name << "\t\t" << age << "\t" << ID_card;
// }

int Nguoi::GetID()
{
    return this->ID_card;
}

void Nguoi::SetID(int ID_card)
{
    this->ID_card = ID_card;
}