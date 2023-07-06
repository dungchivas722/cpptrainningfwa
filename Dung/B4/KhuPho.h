#ifndef KHUPHO_H
#define KHUPHO_H

#include "HoGiaDinh.h"
#include "Nguoi.h"

class KhuPho {
    private:
        vector<HoGiaDinh> hoGiaDinhList;
        set <int> cmndSet;

    public:
        void nhapThongTin(int n);
        void hienThiThongTin() ;
};

#endif
