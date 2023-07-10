#include "Family.h"
#include "Person.h"

using namespace std; 
Family1::Family1(int num_people, int num_address) : num_people(num_people), num_address(num_address) {
}

//cout number address, number of Family1 members, each personal information of Family1 members
void Family1::getMember () {
    cout << "Number of Family1 address : " << num_address << endl;
    cout << "Number of people in Family1: " << num_people << endl;
    //browse for each person in Family1 
    for (int i = 0; i < num_people; i++) {
        cout << i+1 << ".\n";
        listPeople[i].getPerson();
    }
}

Family1::~Family1() {
    listPeople.clear();
}
