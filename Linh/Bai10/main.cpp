#include "Text.h"

enum choices
{
    ENT = 1,
    CNT = 2,
    NOR = 3,
    ESC = 0
};

int main()
{
    int choice;
    string s;
    Text st;

    do {
        cout << "-------- MENU --------" << endl;
        cout << "1. Enter text" << endl;
        cout << "2. Count character A - a" << endl;
        cout << "3. Normalization the text" << endl;
        cout << "0. Escape" << endl;
        cout << "-----------------------" << endl;
        cout << "Enter your option (0 - 3): ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ENT:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter text: ";
                getline(cin, s);
                st.setText(s);
                break;
            }
                
            case CNT: 
            {
                cout << "------------COUNT------------" << endl;
                st.countA();
                break;
            }

            case NOR:
            {
                cout << "------------NORMALIZATION------------" << endl;
                cout << "____Before____" << endl;
                cout << st.getText() << endl;
                cout << "____After____" << endl;
                st.textNormalization();
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