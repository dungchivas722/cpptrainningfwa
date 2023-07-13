#include "Fresher.h"

Fresher :: Fresher(){}

Fresher :: Fresher(string gradDate, string gradRank, string education)
    : gradDate(gradDate), gradRank(gradRank), education(education){}

Fresher :: ~Fresher(){}

void Fresher :: enterEmployee()
{
    Employee :: enterEmployee();

    cout << "Enter graduation date: ";
    cin >> gradDate;

    cout << "Enter graduation rank: ";
    cin >> gradRank;

    cin.ignore();
    cout << "Enter graduation university name: ";
    getline(cin, education);

    Employee :: addCertificate();
}   

void Fresher :: showEmployee() 
{
    cout << endl;
    Employee :: showEmployee();
    cout << "Position: Fresher" << endl;
    cout << endl;
    cout << "Graduation date: " << gradDate << endl;
    cout << "Graduation rank: " << gradRank << endl;
    cout << "Graduation university name: " << education << endl;
    Employee :: showCertificate();
}