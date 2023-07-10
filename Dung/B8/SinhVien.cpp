#include "SinhVien.h"

SinhVien::SinhVien(){}
SinhVien::~SinhVien(){}
SinhVien::SinhVien(string ten, string lop, int tuoi) : ten(ten), lop(lop), tuoi(tuoi) {}
void SinhVien::insert(set<int> &B){
    cout<<"Enter name: ";
    getline(cin>>ws,ten);
    cout<<"Enter age: ";
    cin>>tuoi;
    cout<<"Enter class: ";
    getline(cin>>ws,lop);
}
void SinhVien::display(){
    cout<<"Name: "<<ten<<endl;
    cout<<"Age: "<<tuoi<<endl;
    cout<<"Class: "<<lop<<endl;
}