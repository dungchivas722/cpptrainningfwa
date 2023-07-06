#include "KhuPho.h"

set<int> s_ID_card = {};

void KhuPho::add_family()
{
    int n,apartment_number,number_of_member;
    cout << "Nhap vao n ho dan: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ID_card;
        cout << "Nhap ho thu " << i+1 << endl;

        cout << "Nhap so nha: ";
        cin >> apartment_number;
        cout << "Nhap so thanh vien trong gia dinh: ";
        cin >> number_of_member;
       
        HoGiaDinh tmp(apartment_number, number_of_member);

           for (int j = 0; j < number_of_member;j++)
           {
           cout << "Nhap thanh vien thu " << j + 1 << ":\n";
           Nguoi member;
           member.add();
           tmp.list_members.push_back(member);

           do
           {
           cout << "So chung minh nhan dan: ";
	       cin >> ID_card ;
           } 
           while (s_ID_card.count(ID_card)!=0);    
           
	       s_ID_card.insert(ID_card);
           tmp.list_members[j].setID(ID_card);
           }      
        list_family.push_back(tmp);
    }
}

void KhuPho::get_family()
{
    for (int i = 0; i < list_family.size();i++) {
		cout << "HO GIA DINH THU " << i + 1 << ":\n";
		list_family[i].get_member();
	}
}

KhuPho::~KhuPho()
{
    list_family.clear();
}