#ifndef THISINH_H
#define THISINH_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class ThiSinh {

    protected:
        string soBaoDanh;
        string hoTen;
        string diaChi;
        int mucUuTien;

    public:
        virtual ~ThiSinh();
        virtual void nhapThongTin();
        virtual void hienThiThongTin();
        string getSoBaoDanh();
};

#endif
