#include <iostream>
#include <string.h>
#include "CanBo.h"

using namespace std;

CanBo :: CanBo(string name, int age, string gender, string address) 
    : name(name), age(age), gender(gender), address(address){}

CanBo :: ~CanBo(){}

void CanBo :: setName(string name)
{
    this->name = name;
}

string CanBo :: getName()
{
    return this->name;
}

void CanBo :: setAge(int age)
{
    this->age = age;
}

int CanBo :: getAge()
{
    return this->age;
}

void CanBo :: setGender(string gender)
{
    this->gender = gender;
}

string CanBo :: getGender()
{
    return this->gender;
}

void CanBo :: setAddress(string address)
{
    this->address = address;
}

string CanBo :: getAddress()
{
    return this->address;
}

void CanBo :: enterInformation()
{
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter gender: ";
    getline(cin, gender);
    cout << "Enter address: ";
    getline(cin, address);
}

void CanBo :: showInformation() const
{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Gender: " << this->gender << endl;
    cout << "Address: " << this->address << endl;  
}