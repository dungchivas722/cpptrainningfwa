#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh(int apartment_number, int number_of_member):  apartment_number(apartment_number),number_of_member(number_of_member) {};

void HoGiaDinh::get_member()
{
    cout << "So nha: " << apartment_number << endl;
    cout << "So thanh vien trong gia dinh: " << number_of_member << endl;
    cout << "Thong tin cac thanh vien trong gia dinh:\n";
    for (int i = 0; i < number_of_member;i++)
    {
        cout << i + 1 << ".\t";
		list_members[i].get();
		cout << endl;
    }
}

HoGiaDinh::~HoGiaDinh()
{
    list_members.clear();
}

