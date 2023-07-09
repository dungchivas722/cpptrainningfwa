#include "Experience.h"

Experience :: Experience(){}

Experience :: Experience(int expInYear, string proSkill)
    : expInYear(expInYear), proSkill(proSkill){}

Experience :: ~Experience(){}

void Experience :: enterEmployee()
{
    Employee :: enterEmployee();

    cout << "Enter number of years of experience: ";
    cin >> expInYear;

    cin.ignore();
    cout << "Enter professional skills: ";
    getline(cin, proSkill);

    Employee :: addCertificate();
}   

void Experience :: showEmployee() 
{
    cout << endl;
    Employee :: showEmployee();
    cout << "Position: Experience" << endl;
    cout << endl;
    cout << "Number of years of experience: " << expInYear << endl;
    cout << "Professional skills: " << proSkill << endl;
    Employee :: showCertificate();
}