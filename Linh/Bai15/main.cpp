#include "Department.h"

enum Option
{
    ADD = 1,
    DEL = 2,
    SHW = 3,
    NRS = 4,
    HES = 5,
    ISL = 6,
    G8L = 7,
    HGS = 8,
    ASL = 9,
    NSYA = 10
    // ESC = 0
};

int main()
{
    Department dep;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout << "1.  Add a student" << endl;
        cout << "2.  Delete a student" << endl;
        cout << "3.  Show student list" << endl;
        cout << "4.  Number of regular students" << endl;
        cout << "5.  Highest entrance student" << endl;
        cout << "6.  Inservice student list" << endl;
        cout << "7.  GPA above 3.2 list" << endl;
        cout << "8.  Highest GPA student" << endl;
        cout << "9.  Arrange student list" << endl;
        cout << "10. Number of students by year of admission" << endl;
        cout << "0.  Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 8): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ADD:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter a student" << endl;
                dep.addStudent();
                break;
            }

            case DEL:
            {
                cout << "------------DELETE------------" << endl;
                cout << "Delete a student" << endl;
                dep.deleteStudent();
                break;
            }

            case SHW:
            {
                cout << "------------SHOW------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                dep.showStudent();
                break;
            }

            case NRS:
            {
                cout << "------------NUMBER REGULAR STUDENT------------" << endl;
                cout << "Number regular student" << endl;
                // cout << 
                dep.numberOfRegular();
                break;
            }

            case HES:
            {
                cout << "------------HIGHEST ENTRANCE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                dep.highestEntrance();
                break;
            }

            case ISL:
            {
                cout << "------------INSERVICE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                dep.inserviceList();
                break;
            }

            case G8L:
            {
                cout << "------------GPA ABOVE 8.0------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                dep.lastest_8List();
                break;
            }

            case HGS:
            {
                cout << "------------HIGHEST GPA STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                dep.gpaHighest();
                break;
            }

            case ASL:
            {
                cout << "------------ARRANGE STUDENT LIST------------" << endl;
                cout << "Show student list" << endl;
                dep.arrangeList();
                break;
            }

            case NSYA:
            {
                cout << "------------NUMBER STUDENT ADMISSION------------" << endl;
                dep.numberOfStudentsByYear();
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

// g++ *.cpp -o run; .\run.exe


// 1
// 1
// 1
// Linh
// 06/04/2000
// 2018
// 25
// 1
// 2022
// 3.3
// 1
// 2021
// 1.5
// 1
// 2023
// 3.5
// 0
// 1
// 2
// 2
// Dang
// 25/06/2003
// 2021
// 24
// ND
// 1
// 2022
// 3.1
// 1
// 2021
// 2.5
// 1
// 2023
// 2.7
// 0
// 1
// 2
// 3
// Huy
// 21/06/2000
// 2019
// 29
// HN
// 1
// 2022
// 2.7
// 1
// 2021
// 2.7
// 1
// 2023
// 2.8
// 0
// 1
// 1
// 4
// Hoang
// 12/08/2000
// 2018
// 27
// 1
// 2022
// 1.9
// 1
// 2023
// 2.5
// 1
// 2021
// 3.3
// 0