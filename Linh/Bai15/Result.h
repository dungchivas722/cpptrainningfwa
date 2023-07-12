#ifndef RESULT_H 
#define RESULT_H

#include <iostream>
#include <string>

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
        string getSemester() const;
        float getGPA() const;

        void enterResult();
        void showResult();
};

class semesterComparator
{
    public:
        bool operator()(const Result& result1, const Result& result2) const;
};

#endif /* RESULT_H */