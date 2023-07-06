#ifndef THISINHKHOIB_H
#define THISINHKHOIB_H

#include "ThiSinh.h"

class ThiSinhKhoiB : public ThiSinh {
    private:
        int diemToan;
        int diemHoa;
        int diemSinh;
    public:
        void nhapThongTin() override;
        void hienThiThongTin() override;
};

#endif
