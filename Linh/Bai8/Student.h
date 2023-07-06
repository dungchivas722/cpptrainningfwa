#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    private:
        string name;
        int age;
        string grade;

    public:
        Student();
        Student(string name, int age, string grade);
        ~Student();

        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setGrade(string grade);
        string getGrade();

        void enterStudent();
        void showStudent() const;
};

#endif /* STUDENT_H */