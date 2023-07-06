#include "ThiSinh.h"

ThiSinh::~ThiSinh() {}

void ThiSinh::nhapThongTin(){
    cout << "Enter SBD: ";
    cin.ignore();
    getline(cin, soBaoDanh);
    cout << "Enter Name: ";
    getline(cin>>ws, hoTen);
    cout << "Enter Addr: ";
    getline(cin>>ws, diaChi);
    cout << "Enter Priority : ";
    cin >> mucUuTien;
    cin.ignore();
}

void ThiSinh::hienThiThongTin(){
    cout << "SBD: " << soBaoDanh << endl;
    cout << "Name: " << hoTen << endl;
    cout << "Addr: " << diaChi << endl;
    cout << "Priority : " << mucUuTien << endl;
}

string ThiSinh::getSoBaoDanh() {
    return soBaoDanh;
}
