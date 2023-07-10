#include "Town.cpp"
#include <iostream>

#define ADD 1
#define DISPLAY 2 

using namespace std; 

int main() {
    Town town;
    // int choice; 
    // while (true)
    // {
    //         cout << "===========================TOWN===========================" << endl;
    //         cout << "1. Add Family1                2. Display Town's information" << endl;
    //         cout << "Enter choice: ";
    //         cin >> choice; 
    //         cout << "==========================================================\n";
    //         switch (choice){
    //             case ADD:
    //                 town.addFamily1();
    //                 break;
    //             case DISPLAY:
    //                 town.getFamily1();
    //                 break;
    //             default:
    //                 cout << "Re-enter!!!!" << endl;
    //                 break;
    //         }
    // }
    town.addFamily1();
    cout << "TOWN INFORMATION: \n";
    town.getFamily1();
    return 0; 
}