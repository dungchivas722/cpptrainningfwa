#include "Person.h"
#include "Person.cpp"
#include "Family.h"
#include "Family.cpp"
#include "Town.h"
#include "Town.cpp"
#include <iostream>

#define ADD 1
#define DISPLAY 2 

using namespace std; 

int main() {
    Town town;
    int choice; 
    while (true)
    {
            cout << "===========================TOWN===========================" << endl;
            cout << "1. Add family                2. Display Town's information" << endl;
            cout << "Enter choice: ";
            cin >> choice; 
            cout << "==========================================================\n";
            switch (choice){
                case ADD:
                    town.Add_family();
                    break;
                case DISPLAY:
                    town.display();
                    break;
                default:
                    cout << "Re-enter!!!!" << endl;
                    break;
            }
    }
    return 0; 
}