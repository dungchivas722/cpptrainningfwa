#ifndef THISINHKHOIC_H
#define THISINHKHOIC_H

#include "ThiSinh.h"

class ThiSinhKhoiC : public ThiSinh {
    private:
        int diemVan;
        int diemSu;
        int diemDia;

    public:
        void nhapThongTin() override;
        void hienThiThongTin() override;
};

#endif
