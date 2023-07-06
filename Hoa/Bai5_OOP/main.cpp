#include "Person.h"
#include "Person.cpp"
#include "Hotel.h"
#include "Hotel.cpp"
#define ADD 1
#define DELETE 2 
#define PAY 3
#define EXIT 4

int main() {
    Hotel hotel;
    int choice;
    while (true)
    {
        cout << "=======================HOTEL==========================" << endl;
        cout << "1. Add customer                     2. Delete customer" << endl;
        cout << "3. Calculate customer's bill        4. Exit program   " << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << "======================================================" << endl;
        switch (choice)
        {
        case ADD:
            hotel.add_Customer();
            break;
        case DELETE:
            hotel.delete_Customer();
            break;
        case PAY:
            hotel.calculate_Payment();
            break;
        case EXIT:
            hotel.exitProgram();
            break;
        default:
            cout << "Re-enter your choice!!!!!!!!" << endl;
            break;
        }

    }
    return 0;
}