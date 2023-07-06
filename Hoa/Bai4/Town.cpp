#pragma once 
#include "Person.h"
#include "Family.h"
#include "Town.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;
Town::Town() {}
void Town::setNum_family(int num_family) {
    this -> num_family = num_family;
}
int Town::getNum_family() {
    return num_family; 
}
void Town::Add_family() {
    int num_family;
    int num_address;
    int num_people; 
    cout << "Enter number of families: ";
    cin >> num_family;
    setNum_family(num_family);
    for (int i = 0; i < Town::getNum_family(); i++) {
        
        cout << "Enter number of address: ";
        cin >> num_address;
        
        cout << "Enter number of members in family: ";
        cin >> num_people;
        
        Family *family = new Family (num_people, num_address);
        family->Add_people();
        listFamilies.push_back(family);
    }
    cout << "\n==========================================================\n";
}
void Town :: display() {
    cout << "Number of family in town: " << getNum_family() << endl;
    for (int i = 0; i < Town :: getNum_family(); i++) {
        listFamilies[i] -> display();
    }
}

Town::~Town() {
    for (Family* x : listFamilies) {
        if (x != NULL) {
        delete x;
        }
    }
    listFamilies.clear();
}