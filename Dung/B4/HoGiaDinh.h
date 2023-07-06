#ifndef HOGIADINH_H
#define HOGIADINH_H

#include "Nguoi.h"

class HoGiaDinh {
    private:
        int numMember;
        int numHouse;
        vector<Nguoi> listMember;
        set<int> cmndSet;

    public:
        void nhapThongTin(set<int> &cmndmember);
        void hienThiThongTin();

};

#endif
