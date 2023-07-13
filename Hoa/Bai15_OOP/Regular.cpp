#include "Regurlar.h"

RegularStudent :: RegularStudent(){}

RegularStudent :: RegularStudent(string id, string name, string birthDate, int admissionYear, float entranceScore)
    : Student(id, name, birthDate, admissionYear, entranceScore){}

RegularStudent :: ~RegularStudent(){}

void RegularStudent :: enterStudent()
{
    Student :: enterStudent();
    Student :: addResult();
}

void RegularStudent :: showStudent()
{
    Student :: showStudent();
}

int RegularStudent :: isRegular()
{
    return REGULAR;
}