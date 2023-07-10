#ifndef QUANLYTHEMUON_H
#define QUANLYTHEMUON_H
#include "TheMuon.h"
#include <map>
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
        map<int,unique_ptr<TheMuon>> list_ma_map;

    public:
        quanly();
        ~quanly();
        void them();
        void xoa_ma();
        void hienthi();
        void them_map();
        void xoa_map();
        void hienthimap();
};
#endif