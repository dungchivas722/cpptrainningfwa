#include "Student.h"

Student :: Student(){}

Student :: Student(string name, int age, string grade)
    : name(name), age(age), grade(grade){}

Student :: ~Student(){}

void Student :: setName(string name)
{
    this->name = name;
}

string Student :: getName()
{
    return this->name;
}

void Student :: setAge(int age)
{
    this->age = age;
}

int Student :: getAge()
{
    return this->age;
}

void Student :: setGrade(string grade)
{
    this->grade = grade;
}

string Student :: getGrade()
{
    return this->grade;
}

void Student :: enterStudent()
{
    cout << endl;
    cout << "Enter information of member" << endl;
    
    // cin.ignore();
    cout << "Student's name: ";
    getline(cin, name);

    cout << "Student's age: ";
    cin >> age;

    cin.ignore();
    cout << "Student's grade: ";
    getline(cin, grade);
}

void Student :: showStudent() const
{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Grade: " << this->grade << endl;  
}