#include "Town.h"

set<int> tmp_ID_card = {};

Town :: Town () {}

void Town :: addFamily()
{
    cout << "============================List of families in the town==================================\n";
    // number of families
    // address number
    // number of members in Family
    int n, num_address, num_people;
    cout << "Enter n families: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id_card_number;
        cout << "Enter address number: ";
        cin >> num_address;
        cout << "Enter number of members in Family: ";
        cin >> num_people;
        // next to Family
        Family tmp(num_address, num_people);
        // for each member
        for (int j = 0; j < num_people; j++)
        {
            Person p;
            p.addPerson();
            tmp.listPeople.push_back(p); //list people in Family add 1 person

            // do-while to avoid the case of duplicate ID number.
            do
            {
                cout << "ID_card_number: ";
                cin >> id_card_number;
            } while (tmp_ID_card.count(id_card_number) != 0);

            tmp_ID_card.insert(id_card_number);
            tmp.listPeople[j].setID_card(id_card_number);
        }
        cout << "****************************************************************************" << endl;
        listFamilies.push_back(tmp);
    }
}

void Town :: getFamily()
{
    for (int i = 0; i < listFamilies.size(); i++) {
        cout << "Family number: " << i+1 << endl;
        listFamilies[i].getMember();
        cout << "****************************************************************************" << endl;
    }
}
Town::~Town()
{
    listFamilies.clear();
}