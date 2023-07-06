#include "Household.h"

Household :: Household(vector <Person> person, string address)
    : members(person), address(address){}

Household :: ~Household(){}

void Household :: setAddress(string address)
{
    this->address = address;
}

string Household :: getAddress()
{
    return this->address;
}

vector <Person> Household :: getPerson()
{
    return members;
}

void Household :: showHousehold() const
{
    cout << "Address: " << this->address << endl;
    cout << "Number of members: " << members.size() << endl;
    cout << endl;
    for (Person x : members) 
    {
        x.showPerson();
        cout << endl;
    }
}
