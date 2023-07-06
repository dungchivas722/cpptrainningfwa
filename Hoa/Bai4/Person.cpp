#include "Person.h"
Person :: Person() {}
Person :: Person(string name, int age, string job, int id_card_number) {
    this->name = name;
    this->age = age; 
    this->job = job;
    this-> id_card_number = id_card_number;
}
void Person :: setName(string name) {
    this -> name = name ;
}
void Person :: setAge(int age) {
    this -> age = age; 
}
void Person :: setJob(string job) {
    this -> job = job;
}
void Person :: setId_card_number(int id_card_number) {
    this -> id_card_number = id_card_number;
}
string Person::getName(){
    return name; 
}
int Person::getAge(){
    return age; 
}
string Person::getJob(){
    return job; 
}
int Person::getId_card_number(){
    return id_card_number;
}
void Person::display() {
    cout << "Name: "<< getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Job: " << getJob() << endl;
    cout << "ID Card Number:"<< getId_card_number() <<endl;
}
