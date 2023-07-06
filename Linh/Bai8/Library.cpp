#include "Library.h"

void Library :: addCard()
{
    Student tmpStudent;
    string id;
    int borrowDate;
    int paymentDate;
    int bookId;

    tmpStudent.enterStudent();

    bool found;
    do
    {
        // cin.ignore();
        cout << "Student's ID: ";
        getline(cin, id);
        found = false;
        for (Card x : cardList)
        {
            if (x.getId() == id)
            {
                found = true;
                cout << endl;
                cout << "Identification number already exists!" << endl;
                break;
            }
        }
    } 
    while (true == found);

    do
    {
        cout << "Borrow date(date > 0): ";
        cin >> borrowDate;
        found = false;
    } 
    while (borrowDate <= 0);

    do
    {
        cout << "Payment date(>= borrow date): ";
        cin >> paymentDate;
    } 
    while (paymentDate < borrowDate);
    


    cout << "Book ID: ";
    cin >> bookId;
    cin.ignore();

    Card tmpCard(tmpStudent, id, borrowDate, paymentDate, bookId);
    cardList.push_back(tmpCard);
}

void Library :: deleteCard()
{
    string id;
    cout << "____________________________" << endl;
    cout << "Enter the identification number card you want to delete: ";
    cin >> id;
    cout << endl;

    bool found = false;
    for (auto it = cardList.begin(); it != cardList.end(); it++)
    {
        if (it->getId() == id)
        {
            found = true;
            cardList.erase(it);
            cout << "Card " << id << " has been removed!";
            break;
        }
    }

    if (false == found)
    {
        cout << "The card is not in the list!" << endl;
    }
}

void Library :: showCard()
{
    for (Card x : cardList)
    {
        cout << "Infomation of renter" << endl;
        x.showStudentCard();
        cout << endl;
    }
}