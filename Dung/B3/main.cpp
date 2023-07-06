#include "TuyenSinh.h"

int main() {
    TuyenSinh tuyenSinh;

    int choice;
    do {
        cout << "======= MENU =======" << endl;
        cout << "1. Add Candidate" << endl;
        cout << "2. Show List Candidate" << endl;
        cout << "3. Find SBD" << endl;
        cout << "4. Exit" << endl;
        cout << "====================" << endl;
        cout << "Choice your num: ";
        cin >> choice;

        switch (choice) {
        case 1:
            tuyenSinh.themThiSinh();
            break;
        case 2:
            tuyenSinh.hienThiThongTin();
            break;
        case 3:
            tuyenSinh.timKiemTheoSoBaoDanh();
            break;
        case 4:
            cout << "Bye :))" << endl;
            break;
        default:
            cout << "Choice again!" << endl;
            break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
