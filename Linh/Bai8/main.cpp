#include "Library.h"

enum
{
    ADD = 1,
    DEL = 2,
    SHW = 3,
    ESC = 0
};

int main()
{
    Library lib;
    int choice;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Add renter" << endl;
        cout << "2. Delete renter" << endl;
        cout << "3. Show renters" << endl;
        cout << "0. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 3): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ADD:
            {
                cout << "------------ADD------------" << endl;;
                lib.addCard();
                break;
            }
                
            case DEL: 
            {
                cout << "------------DELETE------------" << endl;
                lib.deleteCard();
                break;
            }

            case SHW:
            {
                cout << "------------SHOW------------" << endl;
                lib.showCard();
                break;
            }

            case ESC:
            {
                cout << "------------ESCAPE------------" << endl;
                break;
            }
            default:
                cout << "Your option is not valid!" << endl;
                break;
        }
        cout << "____________________________" << endl;
    } while (choice != ESC);

    return 0;
}