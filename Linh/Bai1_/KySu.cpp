#include "KySu.h"

using namespace std;

KySu :: KySu(string name, int age, string gender, string address, string major) 
    : CanBo(name, age, gender, address), major(major){}

void KySu :: setMajor(string major)
{
    this->major = major;
}

string KySu :: getMajor()
{
    return this->major;
}

void KySu :: enterInformation()
{
    CanBo :: enterInformation();
    cout << "Enter major: ";
    cin >> major;
    cin.ignore();
}

void KySu :: showInformation() const
{
    cout << "Engineer Information!" << endl;
    CanBo :: showInformation();
    cout << "Major: " << this->major << endl;
}
