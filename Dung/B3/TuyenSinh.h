#ifndef TUYENSINH_H
#define TUYENSINH_H

#include "ThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"

enum KhoiThi {
    KHOI_A = 1,
    KHOI_B = 2,
    KHOI_C = 3
};
enum LoaiThiSinh {
    THI_SINH_KHOI_A = 1,
    THI_SINH_KHOI_B = 2,
    THI_SINH_KHOI_C = 3
};

class TuyenSinh {
    private:
        vector<unique_ptr<ThiSinh>> danhSachThiSinh;

    public:
        ~TuyenSinh();
        void themThiSinh();
        void hienThiThongTin();
        void timKiemTheoSoBaoDanh();
};

#endif
