#ifndef RESULT_H 
#define RESULT_H

#include <iostream>
#include <string.h>

using namespace std;

class Result
{
    private:
        string semester;
        float gpa;
    
    public:
        Result();
        Result(string semester, float gpa);
        ~Result();
        string getSemester();
        float getGPA();

        void enterResult();
        void showResult();
};

#endif /* RESULT_H */