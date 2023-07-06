#include "qlcb.h"

int main()
{
    QLCB qlcb;

    int choice;
    do
    {
        cout << "======= MENU =======" << endl;
        cout << "1. add can bo" << endl;
        cout << "2. search name" << endl;
        cout << "3. show list can bo" << endl;
        cout << "4. exit" << endl;
        cout << "====================" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            qlcb.themcanbo();
            break;
        case 2:
            qlcb.timkiemtheoten();
            break;
        case 3:
            qlcb.hienthicanbo();
            break;
        case 4:
            cout << "bye :))" << endl;
            break;
        default:
            cout << "choice again..." << endl;
            break;
        }

        cout << endl;
    } while (choice != 4);
    return 0;
}
