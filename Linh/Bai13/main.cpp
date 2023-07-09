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
    FINT = 5,
    FFRE = 6,
    FEXP = 7
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
                manage.showList();
                break;
            }

            case FINT:
            {
                cout << "------------INTERN------------" << endl;
                cout << "Show intern list" << endl;
                manage.findIntern();
                break;
            }

            case FFRE:
            {
                cout << "------------FRESHER------------" << endl;
                cout << "Show fresher list" << endl;
                manage.findFresher();
                break;
            }

            case FEXP:
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

// g++ -c .\Certificate.cpp .\Employee.cpp .\Intern.cpp .\Fresher.cpp .\Experience.cpp .\ManageEmployee.cpp .\main.cpp
// g++ .\Certificate.o .\Employee.o .\Intern.o .\Fresher.o .\Experience.o .\ManageEmployee.o .\main.o -o run
// .\run.exe

// 1
// 2
// 1
// Linh
// 06/04/2000
// 1234567890
// balinh064@gmail.com
// EE2
// 20222
// HUST
// 1
// BK1
// BK1
// A
// 2023
// 0
// 1
// 0
// 2
// Dang
// 25/06/2003
// 0585019741
// dang@gmail.com
// 3
// C/C++, python
// 0
// 1
// 2
// 3
// Huy
// 21/06/2000
// 0987654321
// huy@abc.com
// IT1
// 20222
// HUST
// 0
