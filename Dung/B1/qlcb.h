#ifndef QLCB_H
#define QLCB_H

#include "Canbo.h"
#include "Kysu.h"
#include "Congnhan.h"
#include "Nhanvien.h"

enum Job 
{
    CONGNHAN = 1,
    KYSU = 2, 
    NHANVIEN = 3
};
enum Menu
{
    THEM = 1,
    TIMKIEM = 2,
    HIEN = 3,
    THOAT = 4
};

class QLCB{
    private:
        vector<canbo*> canbolist;

    public:
        ~QLCB();
        void themcanbo();
        void timkiemtheoten();
        void hienthicanbo();
        void thoatchuongtrinh();
};

#endif