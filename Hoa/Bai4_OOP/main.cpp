#include <iostream>
#include "Town.h"
#define ADD 1
#define DISPLAY 2 

using namespace std; 

int main() {
    Town town;
    town.addFamily();
    cout << "\n=====================================TOWN INFORMATION=========================================\n";
    cout << "                                     ****************                                           " << endl;
    town.getFamily();
    return 0; 
}