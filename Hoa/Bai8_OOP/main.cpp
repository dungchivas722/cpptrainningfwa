#include "Card.h"

#include "Student.h"


#include <vector>
#include <string>
#define ADD 1
#define DELETE 2
#define DISPLAY 3

int main()
{
    vector<Card> listCard;
    int choice;
    string name;
    int age;
    string class_student;
    int idCard;
    string borrowDate;
    string returnDate;
    int bookNumber;
    bool check;
    while (true)
    {
        cout << "=============================LIBRARY================================" << endl;
        cout << "1. Add new card      2. Delete card      3. Display Card Information" << endl;
        cin >> choice;
        cout << "====================================================================" << endl;
        switch(choice)
        {
        case ADD: {
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter class: ";
            cin.ignore();
            getline(cin, class_student);
            cout << "Enter borrow date: ";
            cin >> borrowDate;
            cout << "Enter return date: ";
            cin >> returnDate;
            cout << "Enter ID book: ";
            cin >> bookNumber;
            Card card(name, age, class_student, idCard, borrowDate, returnDate, bookNumber);
            listCard.push_back(card);
            cout << "====================================================================" << endl;
        }
        case DELETE:
            check = true;
            cout << "Enter ID card: " << endl;
            cin >> idCard;
            for (int i = 0; i < listCard.size(); i++)
            {
                if (listCard[i].getIdCard() == idCard)
                {
                    //delete();
                    listCard.erase(listCard.begin() + i);
                    cout << "Deleted!" << endl;
                    check = false;
                }
            }

            if (check)
            {
                cout << "Not found the id cad" << endl;
            }
            break;
            cout << "====================================================================" << endl;

        case DISPLAY:
            check = true;
            cout << "Enter ID cad" << endl;
            cin >> idCard;
            for (int i = 0; i < listCard.size(); i++)
            {
                if (listCard[i].getIdCard() == idCard)
                {
                    cout << "Name of student: " << listCard[i].getName() << endl;
                    cout << "Age:" << listCard[i].getAge() << endl;
                    cout << "Class:" << listCard[i].getClass_student()<< endl;
                    cout << "Borrow date:" << listCard[i].getBorrowDate() << endl;
                    cout << "Return date:" << listCard[i].getReturnDate() << endl;
                    cout << "ID book:" << listCard[i].getBookNumber() << endl;
                }
            }

            if (check)
            {
                cout << "Not found the id cad" << endl;
            }
            break;
            cout << "====================================================================" << endl;
        default:
            break;
        }
    }
    return 0; 
}