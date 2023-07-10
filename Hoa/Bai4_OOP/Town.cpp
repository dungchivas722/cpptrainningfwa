#include "Town.h"

set<int> tmp_ID_card = {};

void Town ::addFamily1()
{
    cout << "#nList of families in the town: \n";
    // number of families
    // address number
    // number of members in Family1
    int n, num_address, num_people;
    cout << "Enter n families: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id_card_number;
        cout << "Enter address number:";
        cin >> num_address;
        cout << "Enter number of members in Family1: ";
        cin >> num_people;
        // next to Family1
        Family1 tmp(num_address, num_people);
        // for each member
        for (int j = 0; j < num_people; j++)
        {
            Person p;
            p.addPerson();
            tmp.listPeople.push_back(p); //list people in Family1 add 1 person

            // do-while to avoid the case of duplicate ID number.
            do
            {
                cout << "ID_card_number: ";
                cin >> id_card_number;
            } while (tmp_ID_card.count(id_card_number) != 0);

            tmp_ID_card.insert(id_card_number);
            tmp.listPeople[j].setID_card(id_card_number);
        }
        listFamilies.push_back(tmp);
    }
}
void Town ::getFamily1()
{
    for (int i = 0; i < listFamilies.size(); i++) {
        cout << "Family1 number: " << i+1 << endl;
        listFamilies[i].getMember();
    }
}
Town::~Town()
{
    listFamilies.clear();
}