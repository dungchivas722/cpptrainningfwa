#include "TheMuon.h"

void TheMuon::insert(set<int>& A) {
    int dem = 0;
    do {
        SinhVien::insert(A);
        cout << "Enter loan coupon code: ";
        cin >> maphieumuon;

        if (A.count(maphieumuon) == 0) {
            A.insert(maphieumuon);
            cout << "Enter book loan day: ";
            cin.ignore(); 
            getline(cin, ngaymuon);
            cout << "Enter return day: ";
            getline(cin, ngaytra);
            cout << "Enter bookstore num: ";
            getline(cin, sohieusach);
            dem = 1;
        } else {
            cout << "Found loan coupon code!!" << endl;
            cout << "Enter again!!" << endl;
        }
    } while (dem == 0);
}

void TheMuon::display() {
    SinhVien::display();
    cout << "Loan coupon code: " << maphieumuon << endl;
    cout << "Book loan day: " << ngaymuon << endl;
    cout << "Return day: " << ngaytra << endl;
    cout << "Bookstore num: " << sohieusach << endl;
}

int TheMuon::getMaPhieuMuon() {
    return maphieumuon;
}
