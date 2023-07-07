#include "Complex.h"

enum choices
{
    ENT = 1,
    SHW = 2,
    ADD = 3,
    MUL = 4,
    ESC = 0
};

int main()
{
    Complex num1, num2;
    Complex num3;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Enter complex number" << endl;
        cout << "2. Show complex number" << endl;
        cout << "3. Add two complex number" << endl;
        cout << "4. Mul two complex number" << endl;
        cout << "0. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 4): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ENT:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter 2 complex number" << endl;
                cout << "The first complex number: ";
                num1.enterComplex();
                cout << "The second complex number: ";
                num2.enterComplex();

                break;
            }
                
            case SHW: 
            {
                cout << "------------SHOW------------" << endl;
                cout << endl;
                cout << "-----Complex number list-----" << endl;
                cout << "1. The first complex number: ";
                num1.showComplex();
                cout << "2. The second complex number: ";
                num2.showComplex();
                break;
            }

            case ADD:
            {
                cout << "------------ADD------------" << endl;
                num3.addTwoComplex(num1, num2);
                cout << "Add result: ";
                num3.showComplex();

                break;
            }

            case MUL:
            {
                cout << "------------MUL------------" << endl;
                num3.mulTwoComplex(num1, num2);;
                cout << "Mul result: ";
                num3.showComplex();
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