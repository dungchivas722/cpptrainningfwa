#include "Candidate.h"

Candidate :: Candidate(string canNumber, string name, string address, string priority)
    : canNumber(canNumber), name(name), address(address), priority(priority){}

Candidate :: ~Candidate()
{

}

void Candidate :: setCanNumber(string idNumber)
{
    this->canNumber = canNumber;
}

string Candidate :: getCanNumber()
{
    return this->canNumber;
}

void Candidate :: setName(string name)
{
    this->name = name;
}

string Candidate :: getName()
{
    return this->name;
}

void Candidate :: setAddress(string address)
{
    this->address = address;
}

string Candidate :: getAddress()
{
    return this->address;
}

void Candidate :: setPriority(string priority)
{
    this->priority = priority;
}

string Candidate :: getPriority()
{
    return this->priority;
}

// void Candidate :: setBlock(string block)
// {
//     this->block = block;
// }
// string Candidate :: getBlock()
// {
//     return this->block;
// }

void Candidate :: showCandidateInformation()
{
    cout << "Identification number: " << this->canNumber << endl;
    cout << "Name: " << this->name << endl;
    cout << "Address: " << this->address << endl;
    cout << "Priority: " << this->priority << endl;
}