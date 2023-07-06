#include <iostream>

#include "Town.h"

int main()
{   
    Town t;

    int choice;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Enter data of town" << endl;
        cout << "2. Show town" << endl;
        cout << "0. Escape program" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 2): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ENTER:
            {
                cout << "------------ENTER DATA------------" << endl;
                t.enterHousehold();
                break;
            }
            
            case SHOW:
            {
                cout << "------------SHOW------------" << endl;
                t.showTown();
            }

            case EXIT:
            {
                cout << "------------ESCAPE------------" << endl;
                break;
            }
            default:
                cout << "Your option is not valid!" << endl;
                break;
        }
        cout << "____________________________" << endl;
    } while (choice != EXIT);

    return 0;
}