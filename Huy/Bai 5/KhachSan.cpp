#include "KhachSan.h"

void KhachSan::SetRoom(int rental_day, char kind_of_room, int numberRent) 
{
    this-> rental_day = rental_day; 
    this -> kind_of_room = kind_of_room; 
    this -> numberRent = numberRent;
} 

//----------------------------------------------------------------
void KhachSan::GetRoom() {
    cout << name << "\t\t" << age << "\t" << ID_card << "\n";
	cout << "So ngay thue: " << rental_day << "\t" << "Loai: " << kind_of_room << "\t" << "Tong gia tien: " << numberRent <<"\n";
}

