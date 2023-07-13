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
    Department department;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout << "1.  Add a employee" << endl;
        cout << "2.  Delete a employee" << endl;
        cout << "3.  Show employee list" << endl;
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
                cout << "Enter a employee" << endl;
                department.addStudent();
                break;
            }

            case DEL:
            {
                cout << "------------DELETE------------" << endl;
                cout << "Delete a employee" << endl;
                department.deleteStudent();
                break;
            }

            case SHW:
            {
                cout << "------------SHOW------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                department.showStudent();
                break;
            }

            case NRS:
            {
                cout << "------------NUMBER REGULAR STUDENT------------" << endl;
                cout << "Number regular student" << endl;
                // cout << 
                department.numberOfRegular();
                break;
            }

            case HES:
            {
                cout << "------------HIGHEST ENTRANCE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                department.highestEntrance();
                break;
            }

            case ISL:
            {
                cout << "------------INSERVICE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                department.inserviceList();
                break;
            }

            case G8L:
            {
                cout << "------------GPA ABOVE 8.0------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                department.lastest_8List();
                break;
            }

            case HGS:
            {
                cout << "------------HIGHEST GPA STUDENT------------" << endl;
                cout << "Show student list" << endl;
                // cout << 
                department.gpaHighest();
                break;
            }

            case ASL:
            {
                cout << "------------ARRANGE STUDENT LIST------------" << endl;
                cout << "Show student list" << endl;
                department.arrangeList();
                break;
            }

            case NSYA:
            {
                cout << "------------NUMBER STUDENT ADMISSION------------" << endl;
                department.numberOfStudentsByYear();
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

