#include<iostream>
#include"TUyenSinh.h"

int main() {
	TuyenSinh TuyenSinh;
	int select;
	do {
		cout << "\n-------------------------MENU-------------------------\n";
		cout <<ADD<< ". Them moi thi sinh.\n";
		cout <<SHOW<< ". Hien thi danh sach thong tin thi sinh.\n";
		cout <<SEARCH<< ". Tim kiem theo so bao danh.\n";
		cout <<EXIT<<". Thoat.\n";
		cout << "Nhap lua chon cua ban: ";
		cin >> select;
		switch (select) {
		case ADD:
			TuyenSinh.add();
			break;
		case SHOW:
			TuyenSinh.show();
			break;
		case SEARCH:
			TuyenSinh.search_ID_number();
			break;
		case EXIT:
			break;
		default:
		    select = 4;
			cout << "Nhap sai moi nhap lai.\n";
			break;
		}
	}
	while(select);
	return 0;
}