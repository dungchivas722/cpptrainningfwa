#include "Person.h"

Person :: Person(string name, int age, string job, string personID)
    : name(name), age(age), job(job), personID(personID){}

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
    return this->age;
}

void Person :: setJob(string job)
{
    this->job = job;
}

string Person :: getJob()
{
    return this->job;
}

void Person :: setPersonID(string personID)
{
    this->personID = personID;
}

string Person :: getPersonID()
{
    return this->personID;
}

void Person :: showPerson() const
{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Job: " << this->job << endl;
    cout << "Personal Identification: " << this->personID << endl;  
}