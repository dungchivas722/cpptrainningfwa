//...............................................................
#include "Person.h"
void Person :: addPerson() {
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age; 
    cout << "Enter job: ";
    cin.ignore();
    getline(cin, job);
}
//Make id_card_number variable names more concise
void Person :: setID_card(int id) {
    id_card_number = id;
}

void Person :: getPerson() {
    cout << name << endl;
    cout << age << endl;
    cout << job << endl;
    cout << id_card_number << endl; 
}