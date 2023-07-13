#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
    private: 
        string name;
        int age; 
        int Id_card_number;
        int cost_type_room;
        int num_rent_day;
    public: 
        Person();
        Person(string name, int age, int Id_card_number, int cost_type_room, int num_rent_day);
        
        void setName(string name);
        void setAge(int age);
        void setId_card_number (int Id_card_number);
        void setCost_type_room (int cost_type_room);
        void setNum_rent_day (int num_rent_day);

        string getName();
        int getAge();
        int getId_card_number();
        int getCost_type_room();
        int getNum_rent_day();

};

#endif