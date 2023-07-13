#include "Person.h"

Person :: Person() {}

Person :: Person (string name, int age, int Id_card_number, int cost_type_room, int num_rent_day) 
{
    this -> name = name; 
    this -> age = age; 
    this -> Id_card_number = Id_card_number;
    this -> cost_type_room = cost_type_room;
    this -> num_rent_day = num_rent_day;
}

void Person :: setName(string name){
    this->name=name;
}

void Person :: setAge(int age){
    this->age=age;
}

void Person :: setId_card_number (int Id_card_number){
    this->Id_card_number = Id_card_number;
}

void Person :: setCost_type_room (int cost_type_room){
    this->cost_type_room = cost_type_room;
}

void Person :: setNum_rent_day (int num_rent_day){
    this->num_rent_day = num_rent_day;
}

string Person :: getName() {
    return name ; 
}

int Person :: getAge() {
    return age; 
}

int Person :: getId_card_number() {
    return Id_card_number;
}

int Person :: getCost_type_room() {
    return cost_type_room;
}

int Person :: getNum_rent_day() {
    return num_rent_day;
}