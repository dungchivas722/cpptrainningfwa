#ifndef THEMUON_H
#define THEMUON_H

#include "SinhVien.h"

class TheMuon : public SinhVien{
    private:
        int maphieumuon;
        string ngaymuon,ngaytra,sohieusach;
        
    public:
        void insert_map() override;
        void insert(set <int> &A) override;
        void display() override;
        int getMaPhieuMuon();
};

#endif