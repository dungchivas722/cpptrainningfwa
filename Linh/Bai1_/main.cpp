#include "QLCB.h"

enum Option
{
    ADD = 1,
    SEARCH = 2,
    SHOW = 3,
    ESCAPE = 4
};

int main() {
    QLCB qlcb;
    int choice;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Add a officer" << endl;
        cout << "2. Search by name" << endl;
        cout << "3. Show the officer list" << endl;
        cout << "4. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (1 - 4): ";
        cin >> choice;

        switch (choice) 
        {
            case ADD:
                qlcb.addOfficer();
                break;
            case SEARCH: {
                cin.ignore();
                string name;
                cout << "Enter your name you want to search: ";
                getline(cin, name);
                qlcb.searchByName(name);
                break;
            }
            case SHOW:
                cout << "____________________________" << endl;
                qlcb.printList();
                break;
            case ESCAPE:
                qlcb.escape();
                break;
            default:
                std::cout << "Your option is not valid!" << std::endl;
                break;
        }
        cout << "____________________________" << endl;
    } while (choice != 4);

    return 0;
}
