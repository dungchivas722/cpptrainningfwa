#include "Result.h"

bool semesterComparator :: operator()(const Result& result1, const Result& result2) const
{
    return result1.getSemester() < result2.getSemester();
}

Result :: Result(){}

Result :: Result(string semester, float gpa) 
{
    this->semester = semester;
    this->gpa = gpa;
}

Result :: ~Result(){}

string Result :: getSemester() const
{
    return this->semester;
}

float Result :: getGPA() const
{
    return this->gpa;
}

void Result :: enterResult()
{
    cout << "Enter Result of semester!" << endl;
    cout << "Semester: ";
    cin >> semester;
    cout << "GPA: ";
    cin >> gpa;
}

void Result :: showResult()
{
    cout << "Semester: " << semester << endl;
    cout << "GPA: " << gpa << endl;
}