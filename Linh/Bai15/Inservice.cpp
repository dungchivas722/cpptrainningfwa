#include "Inservice.h"

InserviceStudent :: InserviceStudent(){}

InserviceStudent :: InserviceStudent(string id, string name, string birthDate, int admissionYear, float entranceScore, string location)
    : Student(id, name, birthDate, admissionYear, entranceScore), location(location){}
InserviceStudent :: ~InserviceStudent(){}

string InserviceStudent :: getLocation()
{
    return this->location;
}

void InserviceStudent :: enterStudent()
{
    Student :: enterStudent();

    cout << "Location: ";
    cin.ignore();
    getline(cin, location);

    Student :: addResult();
}

void InserviceStudent :: showStudent()
{
    Student :: showStudent();
    
}

int InserviceStudent :: isRegular()
{
    return INSERVICE;
}
