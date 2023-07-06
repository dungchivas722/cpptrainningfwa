#ifndef THISINHKHOIA_H
#define THISINHKHOIA_H

#include "ThiSinh.h"

class ThiSinhKhoiA : public ThiSinh {

    private:
        int diemToan;
        int diemLy;
        int diemHoa;

    public:
        void nhapThongTin() override;
        void hienThiThongTin() override;

};

#endif
