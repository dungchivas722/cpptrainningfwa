#pragma once
#include <iostream>

using namespace std; 
class Student {
    private: 
        string name;
        int age; 
        string class_student; //Lop sinh vien
    public: 
        Student();
        Student(string ,int ,string);

        string getName ();
        int getAge ();
        string getClass_student();

        void setName (string age);
        void setAge (int age);
        void setClass_student (string class_student);

        virtual ~Student();
};