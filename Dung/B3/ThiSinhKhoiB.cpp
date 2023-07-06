#include "ThiSinhKhoiB.h"

void ThiSinhKhoiB::nhapThongTin() {
    ThiSinh::nhapThongTin();
    cout << "Enter Math: ";
    cin >> diemToan;
    cout << "Enter Chemistry: ";
    cin >> diemHoa;
    cout << "Enter Biology: ";
    cin >> diemSinh;
    cin.ignore();
}
void ThiSinhKhoiB::hienThiThongTin() {
    ThiSinh::hienThiThongTin();
    cout << "Math scores: " << diemToan << endl;
    cout << "Chemistry scores: " << diemHoa << endl;
    cout << "Biology scores: " << diemSinh << endl;
}

