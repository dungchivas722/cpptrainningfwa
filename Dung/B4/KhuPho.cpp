#include "KhuPho.h"

void KhuPho::nhapThongTin(int n) {
    hoGiaDinhList.resize(n);
    int i = 0;
    for (i =0; i < n; i++) {
        cout << "Enter info household no, " << i + 1 << endl;
        hoGiaDinhList[i].nhapThongTin(cmndSet);
    }
}


void KhuPho::hienThiThongTin() {
    for (HoGiaDinh& hoGiaDinh : hoGiaDinhList) {
        hoGiaDinh.hienThiThongTin();
        cout << endl;
    }
}
