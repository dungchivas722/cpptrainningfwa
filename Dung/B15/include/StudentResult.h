#ifndef STUDENTRESULT_H 
#define STUDENTRESULT_H 

#include <iostream>
#include <string>

using namespace std;

class StudentResult
{
    private:
        string semester;
        float gpa;
    
    public:
        string getSemester();
        float getGPA();

        void enterResult();
        void showResult();
};

#endif /* StudentResult_H */