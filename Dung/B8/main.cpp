#include "quanlythemuon.h"

int main(){
    quanly n;
    int choice;
    do{
        
        cout << endl << "============MENU==========" << endl;
        cout << "Please choice:" <<    endl;
        cout << "1. Add" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Show" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
            {
            case ADD:
                // n.them();
                n.them_map();
                break;
            case DELETE:
                // n.xoa_ma();
                n.xoa_map();
                break;
            case SHOW: 
                // n.hienthi();
                n.hienthimap();
                break;  
            case EXIT: 
                break;
            default:
                cout << "Invalid choice!!" << endl;
                break;
            }
    } while(choice != 4);
    return 0;
}