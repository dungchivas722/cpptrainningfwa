#include "ManageEmployee.h"
#include "Intern.h"
#include "Fresher.h"
#include "Experience.h"


enum Option
{
    ADD = 1,
    CHA = 2,
    DEL = 3,
    SHW = 4,
    INTERN = 5,
    FRESHER = 6,
    EXP = 7
    // ESC = 0
};

int main()
{
    ManageEmployee manage;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Add a employee" << endl;
        cout << "2. Change a employee" << endl;
        cout << "3. Delete a employee" << endl;
        cout << "4. Show employee list" << endl;
        cout << "5. Find all intern" << endl;
        cout << "6. Find all fresher" << endl;
        cout << "7. Find all experience" << endl;
        cout << "0. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 7): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ADD:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter a employee" << endl;
                manage.addEmployee();
                break;
            }
                
            case CHA: 
            {
                cout << "------------CHANGE------------" << endl;
                cout << endl;
                cout << "Change a employee" << endl;
                manage.changeEmployee();
                break;
            }

            case DEL:
            {
                cout << "------------DELETE------------" << endl;
                cout << "Delete a employee" << endl;
                manage.deleteEmployee();
                break;
            }

            case SHW:
            {
                cout << "------------SHOW------------" << endl;
                cout << "Show employee list" << endl;
                // cout << 
                manage.showList();
                break;
            }

            case INTERN:
            {
                cout << "------------INTERN------------" << endl;
                cout << "Show intern list" << endl;
                manage.findIntern();
                break;
            }

            case FRESHER:
            {
                cout << "------------FRESHER------------" << endl;
                cout << "Show fresher list" << endl;
                manage.findFresher();
                break;
            }

            case EXP:
            {
                cout << "------------EXPERIENCE------------" << endl;
                cout << "Show experience list" << endl;
                manage.findExperience();
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
        cout << endl;
        cout << "____________________________" << endl;
    } while (choice != ESC);

    return 0;
}

