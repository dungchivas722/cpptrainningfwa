#pragma once
#include <iostream>
using namespace std; 
class Person {
private:
    string name; 
    int age; 
    string job;
    int id_card_number;
public: 
    Person();
    Person(string name, int age, string job, int id_card_number);
    void setName(string name);
    void setAge(int age);
    void setJob(string job);
    void setId_card_number(int id_card_number);
    string getName();
    int getAge();
    string getJob();
    int getId_card_number();
    void display();
};