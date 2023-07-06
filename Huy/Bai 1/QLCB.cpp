#include"QLCB.h"


QLCB::~QLCB() {
	for (auto &x : list_ofices) {
		if(x !=NULL)
		{
		delete x;
		}
	}
	list_ofices.clear();
}
void QLCB::AddCanBo() {
	int select;
	cout <<WORKER<<". Neu can bo la cong nhan.\n";
	cout <<ENGINEER<<". Neu can bo la Ky Su.\n";
	cout <<STAFF<<". Neu can bo la Nhan Vien.\n";
	cout << "Moi ban nhap: "; cin >> select;
	
	switch(select)
	{
		case WORKER:
		{
			CanBo* tmp = new CongNhan;
		    tmp->add_office();
		    list_ofices.push_back(tmp);
            break;
		}
		case ENGINEER:
		{
			CanBo* tmp = new KiSu;
		    tmp->add_office();
		    list_ofices.push_back(tmp);
            break;
		}
		case STAFF:
		{
			CanBo* tmp = new NhanVien;
		    tmp->add_office();
		    list_ofices.push_back(tmp);
            break;
		}
	}
}
void QLCB::Display() {
	cout << "Danh Sach Can Bo:\n";
	for (int i = 0; i < list_ofices.size(); i++) {
		list_ofices[i]->get_office();
		cout << endl;
	}
}
void QLCB::search_name(string str) {
	cout << "Ket qua tim kiem:\n";
	for (int i = 0; i < list_ofices.size(); i++) {
		if (list_ofices[i]->getName() == str) {
			list_ofices[i]->get_office();
			cout << endl;
		}
	}
}