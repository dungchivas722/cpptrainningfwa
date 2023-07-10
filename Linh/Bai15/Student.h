#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>
#include <vector>
#include "Result.h"

using namespace std;

class Student
{
    protected:
        string id;
        string name;
        string birthDate;
        int admissionYear;
        float entranceScore;
        vector<Result> results;

    public:
        Student();
        Student(string id, string name, string birthDate, int admissionYear, float entranceScore);
        ~Student();

        string getName();
        float getEntranceScore();
        
        virtual bool isRegular() = 0;
        void addResult(const Result& result);
        // float calculateGPA(const string& semester);
        void enterStudent();
        void showStudent();
};

#endif /* STUDENT_H */