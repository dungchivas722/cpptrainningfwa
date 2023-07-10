#pragma once
#include "Student.h"

Student :: Student(){}

Student :: Student (string name, int age, string class_student) {
    this -> name = name; 
    this -> age = age; 
    this -> class_student = class_student;
}
//get
string Student :: getName()
{
    return name;
}

int Student :: getAge()
{
    return age;
}

string Student :: getClass_student()
{
    return class_student;
}
//set
void Student :: setName(string name)
{
    this->name = name;
}

void Student :: setAge(int age)
{
    this->age = age;
}

void Student :: setClass_student(string class_student)
{
    this->class_student = class_student;
}