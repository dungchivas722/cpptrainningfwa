#include "Certificate.h"

Certificate::Certificate(){};

Certificate::~Certificate(){};

void Certificate::InputCertificate(){
    cout<<"Certificate ID: ";
    cin>>cerID;
    cout<<"Certificate Name: ";
    cin.ignore();
    getline(cin,cerName);
    cout<<"Certificate Rank: ";
    cin>>cerRank;
    cout<<"Certificate Date: ";
    cin>>cerDate;
}

void Certificate::ShowCertificate(){
    cout<<cerID<<"\t"<<cerName<<"\t"<<cerRank<<"\t"<<cerDate;
}