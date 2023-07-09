#include "Library.h"
#include "Define.h"

int main()
{
    Library library;
    int choice;
    do {
        cout << "-------- MENU --------" << endl;
        cout <<ADD_ID_CARD<< ". Add renter" << endl;
        cout <<DISPLAY<< ". Show renters" << endl;
        cout <<REMOVE_ID_CARD<< ". Delete renter" << endl;
        cout <<EXIT<< ". Exit" << endl;
        cout << "-----------------------" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
            case ADD_ID_CARD:
            {
                library.Add_Card();
                break;
            }
                
            case DISPLAY: 
            {
              
                library.Display();
                break;
            }

            case REMOVE_ID_CARD:
            {
                
                library.Remove_Card();
                break;
            }

            case EXIT:
            {
                break;
            }
            default:
            {
                choice = TRUE;
                cout << "Nhap sai. Moi nhap lai!" << endl;
                break;
            }
        }
    } while (choice);
    return 0;
}