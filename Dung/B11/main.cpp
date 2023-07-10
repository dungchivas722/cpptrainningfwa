#include "sophuc.h"

enum choices
{
    ENTER = 1,
    SHOW = 2,
    ADD = 3,
    MUL = 4,
    EXIT = 0
};

int main()
{
    Complex num1, num2;
    Complex num3;

    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout <<ENTER<< ". Nhap so phuc" << endl;
        cout <<SHOW<< ". Hien thi so phuc" << endl;
        cout <<ADD<< ". Cong 2 so phuc" << endl;
        cout <<MUL<< ". Nhan 2 so phuc" << endl;
        cout <<EXIT<< ". Exit" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ENTER:
            {
                cout << "Nhap 2 so phuc" << endl;
                cout << "So phuc thu nhat:\n ";
                num1.inputComplex();
                cout << "So phuc thu hai:\n ";
                num2.inputComplex();

                break;
            }
                
            case SHOW: 
            {
                cout << endl;
                cout << "-----Hien thi so phuc-----" << endl;
                cout << "1. So phuc thu nhat: ";
                num1.showComplex();
                cout << "2. So phuc thu hai: ";
                num2.showComplex();
                break;
            }

            case ADD:
            {
                num3.addTwoComplex(num1, num2);
                // num3 = num1 + num2;
                cout << "Ket qua cong 2 so phuc: ";
                num3.showComplex();

                break;
            }

            case MUL:
            {
                num3.mulTwoComplex(num1, num2);
                // num3 = num1 * num2;
                cout << "Ket qua nhan 2 so phuc: ";
                num3.showComplex();
                break;
            }

            case EXIT:
            {
                break;
            }
            default:
                cout << "Nhap sai. Moi nhap lai!" << endl;
                break;
        }
        cout << endl;
    } while (choice != EXIT);

    return 0;
}
