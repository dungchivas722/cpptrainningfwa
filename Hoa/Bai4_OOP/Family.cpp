#include "Family.h"
#include "Person.h"

using namespace std; 
Family::Family(int num_people, int num_address) : num_people(num_people), num_address(num_address) {
}

//cout number address, number of Family members, each personal information of Family members
void Family::getMember () {
    cout << "Number of Family address : " << num_address << endl;
    cout << "Number of people in Family: " << num_people << endl;
    //browse for each person in Family 
    for (int i = 0; i < num_people; i++) {
        cout << i+1 << ".\n";
        listPeople[i].getPerson();
    }
}

Family::~Family() {
    listPeople.clear();
}
