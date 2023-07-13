#include "Faculty.h"


int main()
{
    Faculty fac;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout << "1.  Add a student" << endl;
        cout << "2.  Delete a student" << endl;
        cout << "3.  Show student list" << endl;
        cout << "4.  Number of regular students" << endl;
        cout << "5.  Highest entrance student" << endl;
        cout << "6.  Inservice student list" << endl;
        cout << "7.  GPA above 8.0 list" << endl;
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
            case ENT:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter a student" << endl;
                fac.addStudent();
                break;
            }

            case DEL:
            {
                cout << "------------DELETE------------" << endl;
                cout << "Delete a student" << endl;
                fac.deleteStudent();
                break;
            }

            case SHW:
            {
                cout << "------------SHOW------------" << endl;
                cout << "Show student list" << endl;
                fac.showStudent();
                break;
            }

            case NRS:
            {
                cout << "------------NUMBER REGULAR STUDENT------------" << endl;
                cout << "Number regular student" << endl;
                fac.showRelugarStudent();
                break;
            }

            case HES:
            {
                cout << "------------HIGHEST ENTRANCE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                fac.showStudentHighestEntranceScore();
                break;
            }

            case ISL:
            {
                cout << "------------INSERVICE STUDENT------------" << endl;
                cout << "Show student list" << endl;
                fac.inserviceList();
                break;
            }

            case G8L:
            {
                cout << "------------GPA ABOVE 8.0------------" << endl;
                cout << "Show student list" << endl;
                fac.lastest_8List();
                break;
            }

            case HGS:
            {
                cout << "------------HIGHEST GPA STUDENT------------" << endl;
                cout << "Show student list" << endl; 
                fac.gpaHighest();
                break;
            }

            case ASL:
            {
                cout << "------------ARRANGE STUDENT LIST------------" << endl;
                cout << "Show student list" << endl;
                fac.arrangeList();
                break;
            }

            case NSYA:
            {
                cout << "------------NUMBER STUDENT ADMISSION------------" << endl;
                fac.numberOfStudentsByYear();
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