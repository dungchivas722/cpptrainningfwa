#include "Result.h"

Result :: Result(){}

Result :: Result(string semester, float gpa) 
{
    this->semester = semester;
    this->gpa = gpa;
}

Result :: ~Result(){}

string Result :: getSemester()
{
    return this->semester;
}

float Result :: getGPA()
{
    return this->gpa;
}