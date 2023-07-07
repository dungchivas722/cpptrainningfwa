#include "TUyenSinh.h"


void TuyenSinh::add() {
	cout <<KA<< ". Them thi sinh khoi A.\n";
	cout <<KB<< ". Them thi sinh khoi B.\n";
	cout <<KC<< ". Them thi sinh khoi C.\n";
	int select;
	cout << "Moi ban chon: "; cin >> select;
	switch (select) {
	case KA: {
		int ID_number;
		bool check_ID_number;
		shared_ptr<ThiSinh> tmp = make_shared<ThiSinh_KA>();
		tmp->add_student();
		do {
        cout << "Nhap so bao danh: ";
        cin >> ID_number;
		check_ID_number = false;
		for(int i = 0; i <list_students.size(); i++) 
		{
			if((list_students[i]->get_ID_number()) == ID_number)
			{
				check_ID_number = true;
				cout << "So bao danh da ton tai. Moi nhap lai: \n";
			}

        }
		}
	    while (check_ID_number);
		tmp ->set_ID_number(ID_number);
		list_students.push_back(tmp);
		break;
	}
	
	case KB: {
		int ID_number;
		bool check_ID_number;
		shared_ptr<ThiSinh> tmp = make_shared<ThiSinh_KB>();
		tmp->add_student();
		do {
        cout << "Nhap so bao danh: ";
        cin >> ID_number;
		check_ID_number = false;
		for(int i = 0; i <list_students.size(); i++) 
		{
			if((list_students[i]->get_ID_number()) == ID_number)
			{
				check_ID_number = true;
				cout << "So bao danh da ton tai. Moi nhap lai: \n";
			}

        }
		}
	    while (check_ID_number);
		tmp ->set_ID_number(ID_number);
		list_students.push_back(tmp);
		break;
	}
	case KC: {
		int ID_number;
		bool check_ID_number;
		shared_ptr<ThiSinh> tmp = make_shared<ThiSinh_KC>();
		tmp->add_student();
		do {
        cout << "Nhap so bao danh: ";
        cin >> ID_number;
		check_ID_number = false;
		for(int i = 0; i <list_students.size(); i++) 
		{
			if((list_students[i]->get_ID_number()) == ID_number)
			{
				check_ID_number = true;
				cout << "So bao danh da ton tai. Moi nhap lai: \n";
			}

        }
		}
	    while (check_ID_number);
		tmp ->set_ID_number(ID_number);
		list_students.push_back(tmp);
		break;
	}
	default:
			cout << "Nhap sai moi nhap lai.\n";
			break;
	}
}

void TuyenSinh::show() {
	for (const auto &x : list_students) {
		x->get_student();
		cout << endl;
	}
}

void TuyenSinh::search_ID_number() {
	int str;
	cout << "Nhap so bao danh ban muon tim: ";
	cin >> str;
	cout << "Danh sach ket qua: \n";
	for (const auto &x : list_students) {
		if (x->get_ID_number() == str) {
			x->get_student();
		}
	}
}

TuyenSinh::~TuyenSinh() {
	list_students.clear();
}



