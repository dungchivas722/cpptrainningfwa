#include "Complex.h"

enum choices
{
    ENTER = 1,
    RESULT = 2,
    ADD = 3,
    MULTIPLY = 4,
    EXIT = 0
};

int main()
{
    Complex_Number num1, num2;
    Complex_Number num3;

    int choice;
    do {
        cout << "-------- COMPLEX NUMBER --------" << endl;
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
            case ENTER:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter 2 complex number" << endl;
                cout << "The first complex number: ";
                num1.enterComplex();
                cout << "The second complex number: ";
                num2.enterComplex();

                break;
            }
                
            case RESULT: 
            {
                cout << "------------RESULT------------" << endl;
                cout << endl;
                cout << "-----Complex number list-----" << endl;
                cout << "1. The first complex number: ";
                num1.resultComplex();
                cout << "2. The second complex number: ";
                num2.resultComplex();
                break;
            }

            case ADD:
            {
                cout << "------------ADD------------" << endl;
                num3.addTwoComplexNumber(num1, num2);
                cout << "Add result: ";
                num3.resultComplex();

                break;
            }

            case MULTIPLY:
            {
                cout << "------------MUL------------" << endl;
                num3.mulTwoComplexNumber(num1, num2);;
                cout << "Mul result: ";
                num3.resultComplex();
                break;
            }

            case EXIT:
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
    } while (choice != EXIT);

    return 0;
}