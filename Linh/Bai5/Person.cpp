#include "Person.h"

Person :: Person(){}

Person :: Person(string name, int age, string personID, int rentDays, string typeRoom)
    : name(name), age(age), personID(personID), rentDays(rentDays), typeRoom(typeRoom){}

Person :: ~Person(){}

void Person :: setName(string name)
{
    this->name = name;
}

string Person :: getName()
{
    return this->name;
}

void Person :: setAge(int age)
{
    this->age = age;
}

int Person :: getAge()
{
    return age;
}

void Person :: setPersonID(string personID)
{
    this->personID = personID;
}

string Person :: getPersonID()
{
    return personID;
}

void Person :: setRentDays(int rentDays)
{
    this->rentDays = rentDays;
}

int Person :: getRentDays()
{
    return this->rentDays;
}

void Person :: setTypeRoom(string typeRoom)
{
    this->typeRoom = typeRoom;
}

string Person :: getTypeRoom()
{
    return this->typeRoom;
}

void Person :: enterInformation()
{
    cout << endl;
    cout << "Enter information of renter" << endl;

    // cin.ignore();
    cout << "Renter's name: ";
    getline(cin, name);

    cout << "Renter's age: ";
    cin >> age;

    cin.ignore();

    // cout << "Renter's personal identification: ";
    // cin >> personID;

    // cout << "Number of rent days: ";
    // cin >> rentDays;

    // cout << "Type of room: ";
    // cin >> typeRoom;
}

void Person :: showInformationPerson()
{
    cout << "Renter's name: " << name << endl;
    cout << "Renter's age: " << age << endl;
    cout << "Renter's personal identification: " << personID << endl;
    cout << "Number of rent days: " << rentDays << endl;
    cout << "Type of room: " << typeRoom << endl;
}