#include "ThiSinhKhoiC.h"

void ThiSinhKhoiC::nhapThongTin() {
    cout << "Enter Literature: ";
    cin >> diemVan;

    cout << "Enter History: ";
    cin >> diemSu;

    cout << "Enter Geography: ";
    cin >> diemDia;

    cin.ignore();
}

void ThiSinhKhoiC::hienThiThongTin() {
    ThiSinh::hienThiThongTin();
    cout << "Enter Literature: " << diemVan << endl;
    cout << "Enter History: " << diemSu << endl;
    cout << "Enter Geography: " << diemDia << endl;
}

