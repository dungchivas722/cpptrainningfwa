#include "QLKS.h"

void QLKS::add_room()
{
    int rental_day,ID_card,numberRent;
    char kind_of_room;
    bool check_ID_card;

		KhachSan tmp;
        tmp.nguoi.add_member();
        do {
        cout << "Nhap so CMND: ";
        cin >> ID_card;
		check_ID_card = false;
		for(int i = 0; i <list_rooms.size(); i++) 
		{
			if((list_rooms[i].nguoi.GetID()) == ID_card)
			{
				check_ID_card = true;
				cout << "So CMND da ton tai. Moi nhap lai: \n";
			}

        }
		}
	    while (check_ID_card);
		tmp.nguoi.SetID(ID_card); 
	cout << "So ngay thue: "; cin >> rental_day;

    bool check_kind_of_room;
    do {
    cout << "Loai phong: \n"; 
    cout <<KIND_ROOM_A<<". Chon phong A \n";
    cout <<KIND_ROOM_B<<". Chon phong B \n";
    cout <<KIND_ROOM_C<<". Chon phong C \n";
    int i_kind_of_room;
    cin >> i_kind_of_room;  
    check_kind_of_room = false;

    switch (i_kind_of_room)
    {
    case KIND_ROOM_A:
    {
        kind_of_room = 'A';
        numberRent = RENT_OF_KIND_A * rental_day;
        break;
    }
    case KIND_ROOM_B:
    {
        kind_of_room = 'B';
        numberRent = RENT_OF_KIND_B * rental_day;
        break;
    }
    case KIND_ROOM_C:
    {
        kind_of_room = 'C';
        numberRent = RENT_OF_KIND_C * rental_day;
        break;
    }
    default:
    {
        check_kind_of_room = true;
        cout << "Khong hop le vui long nhap lai.\n";
        break;
    }
    }
    }
    while (check_kind_of_room);
    cout << "Da them thanh cong \n";
   
    tmp.SetRoom(rental_day,kind_of_room,numberRent);
    list_rooms.push_back(tmp);
    
}

void QLKS::show_room() {
	cout << "/////////////////DANH SACH CAC PHONG/////////////////\n";
	for (int i = 0; i < list_rooms.size(); i++) {
		cout << i + 1 << ".\t\t";
		list_rooms[i].GetRoom();
	}
}

void QLKS::delete_ID_card()
{
    int ID_card;
    bool check_ID_card;
    
    do
    {
       cout << "Nhap so CMT:  ";
       cin >> ID_card;
       check_ID_card = true;

       for(int i = 0; i < list_rooms.size(); i++) 
    {
		if(list_rooms[i].nguoi.GetID() == ID_card)
		{
           list_rooms.erase(list_rooms.begin() + i);	
           check_ID_card = false;
           cout << "Da xoa thanh cong \n";
		}
    } 
    } while (check_ID_card);

}

void QLKS::Rent_Room()
{
    int ID_card;
    bool check_ID_card;
    cin.ignore();
    do
    {
       cout << "Nhap so CMT:  ";
       cin >> ID_card;
       check_ID_card = true;
       for(int i = 0; i < list_rooms.size(); i++) 
    {
		if(list_rooms[i].nguoi.GetID() == ID_card)
		{
           list_rooms[i].GetRoom();	
           check_ID_card = false;
		}
    } 
    } while (check_ID_card);
    
}

QLKS::~QLKS()
{
    list_rooms.clear();
}

