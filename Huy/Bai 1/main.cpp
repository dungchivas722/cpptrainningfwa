#include"QLCB.h"



int main() {
	QLCB ds;
    int select;
    do
    {
        cout << "\n-----------------------MENU-----------------------\n";
		cout <<ADD<<". Them 1 can bo.\n";
		cout <<SEARCH<<". Tim kiem theo ho ten.\n";
		cout <<SHOW_LIST<<". Hien thi danh sach can bo.\n";
		cout <<EXIT<<". Thoat.\n";

		cout << "Nhap lua chon cua ban: "; cin >> select;
		switch(select)
        {
            case EXIT:
				break;
			case ADD:
			{
				ds.AddCanBo();
				break;
			}
			case SEARCH:
			{
				string tmp;
			    cin.ignore();
			    cout << "Nhap ten ban muon tim kiem: ";
			    getline(cin, tmp);
			    ds.search_name(tmp);
				break;
			}
			case SHOW_LIST:
			{
				ds.Display();
				break;
			}
			default:
			select = 4;
			cout << "Nhap sai moi nhap lai.\n";
			break;
        }
    }
	while (select);
	return 0;
}