#include "Nguoi.h"

void Nguoi::nhapThongTin(set<int> &cmndmember) {
    bool cmndFound = true;
    do{
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Job: ";
        getline(cin, job);
        cout << "ID-Card - CMND: ";
        cin >> cmnd;
        if (cmndmember.count(cmnd)==0)
            {   
                cmndmember.insert(cmnd);
                cmndFound = false;
            }else{
                cout<<"ID card found"<<endl;
                cout<<"Enter Again!!"<<endl;
            }
    }while(cmndFound==true);
}

void Nguoi::hienThiThongTin() {
    cout << "-------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;
    cout << "( ID-Card ) CMND: " << cmnd << endl;
}
