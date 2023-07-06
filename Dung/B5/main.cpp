#include "hotel.h"

enum {
    ADD = 1,
    DEL = 2,
    CAL = 3,
    SHW = 4,
    ESC = 0
};

int main() {
    Hotel h;
    int choice;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Add renter" << endl;
        cout << "2. Delete renter" << endl;
        cout << "3. Calculate the bill" << endl;
        cout << "4. Show renters" << endl;
        cout << "0. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 4): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case ADD: {
                h.addRenter();
                break;
            }
            case DEL: {
                h.deleteRenter();
                break;
            }
            case CAL: {
                h.calculateBill();
                cout << endl;
                break;
            }
            case SHW: {
                h.showList();
                break;
            }
            case ESC: {
                break;
            }
            default:
                cout << "Your option is not valid!" << endl;
                break;
        }
    } while (choice != ESC);

    return 0;
}
