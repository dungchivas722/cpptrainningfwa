#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>
#include <set>
#include <regex>

#include "Result.h"

using namespace std;

enum choice     /* Choice for add result */
{
    ENT = 1,
    ESC = 0
};

enum stu_type
{
    REGULAR = 1,
    INSERVICE = 2
};

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
        set <Result, semesterComparator> results;

    public:
        Student();
        Student(string id, string name, string birthDate, int admissionYear, float entranceScore);
        virtual ~Student();

        void setID(string id);
        string getID();
        string getName();
        float getEntranceScore();
        int getAdmissionYear();
        
        virtual int isRegular() = 0;
        float gpaLastest();
        float gpaMax();

        void addResult();
        void showResult();
        void deleteResult();

        virtual void enterStudent();
        virtual void showStudent() = 0;

        // static bool compareType(const Student& s1, const Student& s2);
        // static bool compareAdmissionYear(const Student& s1, const Student& s2);
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