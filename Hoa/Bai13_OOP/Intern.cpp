#include "Intern.h"

Intern :: Intern(){}

Intern :: Intern(string major, string semester, string uniName)
    : major(major), semester(semester), uniName(uniName){}

Intern :: ~Intern(){}

void Intern :: enterEmployee()
{
    cout << endl;
    Employee :: enterEmployee();
    cout << endl;

    cin.ignore();
    cout << "Enter major: ";
    getline(cin, major);

    cout << "Enter semester: ";
    cin >> semester;

    cin.ignore();
    cout << "Enter university name: ";
    getline(cin, uniName);
    
    Employee :: addCertificate();
}

void Intern :: showEmployee() 
{
    cout << endl;
    Employee :: showEmployee();
    cout << "Position: Intern" << endl;
    cout << endl;
    cout << "Major: " << major << endl;
    cout << "semester: " << semester << endl;
    cout << "University name: " << uniName << endl;
    Employee :: showCertificate();
}