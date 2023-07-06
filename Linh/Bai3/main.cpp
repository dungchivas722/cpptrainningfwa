#include <iostream>
#include "Enrollments.h"

enum Option
{
    ADD = 1,
    SHOW = 2,
    SEARCH = 3,
    ESCAPE = 4
};

int main()
{
    Enrollments enroll;
    int choice;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Add a candidate" << endl;
        cout << "2. Show candidate information" << endl;
        cout << "3. Search by candidate number" << endl;
        cout << "4. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (1 - 4): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ADD:
            {
                cout << "------------ADD------------" << endl;;
                enroll.addCandidate();
                break;
            }
                
            case SHOW: 
            {
                cout << "------------SHOW------------" << endl;
                enroll.showCandidateList();
                break;
            }
            case SEARCH:
            {
                cout << "------------SEARCH------------" << endl;
                enroll.searchByCandidateNumber();
                cout << endl;
                break;
            } 
            case ESCAPE:
            {
                cout << "------------ESCAPE------------" << endl;
                enroll.escape();
                break;
            }
            default:
                cout << "Your option is not valid!" << endl;
                break;
        }
        cout << "____________________________" << endl;
    } while (choice != ESCAPE);

    return 0;
}