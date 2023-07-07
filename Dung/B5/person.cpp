#include "person.h"

Person::Person() {}

Person::Person(string name, int age, string personID, int rentDays, string typeRoom)
    : name(name), age(age), personID(personID), rentDays(rentDays), typeRoom(typeRoom) {}

void Person::setPersonID(string personID) {
    this->personID = personID;
}

string Person::getPersonID() {
    return personID;
}
void Person::setRentDays(int rentDays) {
    this->rentDays = rentDays;
}
int Person::getRentDays() {
    return this->rentDays;
}
void Person::setTypeRoom(string typeRoom) {
    this->typeRoom = typeRoom;
}
string Person::getTypeRoom() {
    return this->typeRoom;
}

void Person::enterInformation() {
    cout << endl;
    cout << "Enter information of renter" << endl;

    cout << "Renter's name: ";
    getline(cin, name);

    cout << "Renter's age: ";
    cin >> age;
    cin.ignore();

}

void Person::showInformationPerson() {
    cout << "Renter's name: " << name << endl;
    cout << "Renter's age: " << age << endl;
    cout << "Renter's personal identification: " << personID << endl;
    cout << "Number of rent days: " << rentDays << endl;
    cout << "Type of room: " << typeRoom << endl;
}
