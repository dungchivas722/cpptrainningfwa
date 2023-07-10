#ifndef QUANLYTHEMUON_H
#define QUANLYTHEMUON_H
#include "TheMuon.h"

enum Menu{
    ADD = 1,
    DELETE = 2,
    SHOW = 3,
    EXIT = 4
};

class quanly{
    private:
        vector<TheMuon*> list_the_muon;
        set<int> list_ma;
    public:
        void them();
        void xoa_ma();
        void hienthi();
};
#endif