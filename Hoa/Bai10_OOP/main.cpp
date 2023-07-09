//......................................................
#include "Text.h"

enum choices {
ENTER = 1,
COUNT = 2,
NORMALIZE = 3,
EXIT = 0
};

int main() {
    int choice; 
    string s;
    Text txt; 
    do {
        cout << "========================TEXT_PROCESSING===================" << endl;
        cout << "1. Enter text" << endl;               
        cout << "2. Count character A - a" << endl;
        cout << "3. Normalize the text" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice; 
        cin.ignore();
        cout << "==========================================================\n";

        switch (choice) 
        {
            case ENTER:
            {
                cout << "------------ENTER------------" << endl;;
                cout << "Enter text: ";
                getline(cin, s);
                txt.setText(s);
                break;
            }
                
            case COUNT: 
            {
                cout << "------------COUNT------------" << endl;
                txt.countCharA();
                break;
            }

            case NORMALIZE:
            {
                cout << "------------NORMALIZATION------------" << endl;
                cout << "____Before____" << endl;
                cout << txt.getText() << endl;
                cout << "____After____" << endl;
                txt.normalizeText();
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