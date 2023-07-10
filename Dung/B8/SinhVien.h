#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

class SinhVien{
    private:
        string ten, lop;
        int tuoi;
    public:
        SinhVien();
        virtual ~SinhVien();
        SinhVien(string ten,string lop,int tuoi);
        virtual void insert(set<int> &B);  
        virtual void display();
};

#endif