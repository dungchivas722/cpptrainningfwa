#include "QLKS.h"

int main()
{
    QLKS qlks;
	int select;
	do 
    {
		cout << "\n----------------------MENU----------------------\n";
		cout <<ADD<<". Them 1 phong moi.\n";
		cout <<SHOWL_LIST<< ". Hien thi toan bo danh sach.\n";
		cout <<RENT_ROOM_TO_ID_CARD<<". Tinh tien cho khach theo so CMT.\n";
		cout <<DELETE_TO_ID_CARD<<". Xoa phong cho khach theo so CMT.\n";
		cout <<EXIT<<". Thoat.\n";
		cout << "Nhap lua chon cua ban: ";
		cin >> select;

		switch (select) {
		    case ADD: 
            {
			qlks.add_room();
			break;
		    }
		    case SHOWL_LIST: 
            {
			qlks.show_room();
			break;
		    }
		    case RENT_ROOM_TO_ID_CARD:
            {
			qlks.Rent_Room();
			break;
            }
		    case DELETE_TO_ID_CARD:
            {
			qlks.delete_ID_card();
			break;
            }
		    case EXIT:
			break;
            
            default:
            select = TRUE;
            break;

		}
	}
    while (select);
  
    return 0;
}