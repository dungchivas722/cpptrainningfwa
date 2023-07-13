#include "StudentResult.h"


string StudentResult :: getSemester()
{
    return this->semester;
}

float StudentResult :: getGPA()
{
    return this->gpa;
}

void StudentResult :: enterResult()
{
    cout << "Enter Semester name's: ";
    cin.ignore();
    cin >> semester;
    cout << "Enter GPA: ";
    cin >> gpa;    
}

void StudentResult :: showResult()
{
    cout << semester << ":\t" << gpa << "\n"; 
}