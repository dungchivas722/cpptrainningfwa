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
        cout <<ENT<< ". Enter text" << endl;
        cout <<CNT<< ". Count character A - a" << endl;
        cout <<NOR<< ". Normalization the text" << endl;
        cout <<ESC<< ". Escape" << endl;
        cout << "Nhap lua chon: ";
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
    } while (choice != ESC);

    return 0;
}