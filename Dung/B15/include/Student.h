#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Define.h"
#include <memory>
#include <regex>

#include "StudentResult.h"

using namespace std;

/* 
    Birthday, email, phone, name Exception
 */

class birthdayException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class admissionYearException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class nameException : public exception 
{
    public:
        virtual const char* what() const throw();
};

/* 
    Check Date, Name is valid or not valid
 */

bool isValidDate(const string& birthday);
bool isValidName(const string& fullname);

class Student
{
    protected:
        string id;
        string name;
        string birthDate;
        int admissionYear;
        float entranceScore;
        vector<StudentResult> result_lists;
        int student_types;

    public:
        virtual ~Student();

        string getName();
        float getEntranceScore();
        string getId();
        void setId(string id);
        int getStudentType();
        void setStudentType(int type);
        int getAdmissionYear();
        
        void addResult();
        float SemesterGPA(string& semester);
        virtual void enterStudent();
        virtual void showStudent();

        float gpaMax();
        float gpaLastest();


};


class compareAdmissionYear 
{
    public:
        bool operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const;
};

class compareType 
{
    public:
        bool operator()(const shared_ptr<Student>& s1, const shared_ptr<Student>& s2) const;
};


#endif /* STUDENT_H */