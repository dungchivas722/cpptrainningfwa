#include "HoGiaDinh.h"

void HoGiaDinh::nhapThongTin(set<int> &cmndmember){
    cout << "Enter number of member: ";
    cin >> numMember;
    cout << "Enter number of house: ";
    cin >> numHouse;
    cin.ignore();
    listMember.resize(numMember); // thay đổi kích thước listMember thành numMember
    for (int i = 0; i < numMember; i++) {
        cout << "Enter info member no, " << i + 1 << endl;
        listMember[i].nhapThongTin(cmndmember);
    }
}

void HoGiaDinh::hienThiThongTin() {
    cout << "==========================" << endl;
    cout << "num House: " << numHouse << endl;
    cout << "num Member: " << numMember << endl;
    for (int i = 0; i < numMember; i++) {
        cout << "Info member no, " << i + 1 << endl;
        listMember[i].hienThiThongTin();
        
    }
}

