#include "ThiSinhKhoiA.h"

void ThiSinhKhoiA::nhapThongTin() {
    ThiSinh::nhapThongTin();
    cout << "Enter Math: ";
    cin >> diemToan;
    cout << "Enter Physics: ";
    cin >> diemLy;
    cout << "Enter Chemistry: ";
    cin >> diemHoa;
    cin.ignore();
}

void ThiSinhKhoiA::hienThiThongTin() {
    ThiSinh::hienThiThongTin();
    cout << "Math scores: " << diemToan << endl;
    cout << "Physics score: " << diemLy << endl;
    cout << "Chemistry score: " << diemHoa << endl;
}
