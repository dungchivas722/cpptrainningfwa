#ifndef __NHANVIEN
#define __NHANVIEN

#include "CANBO.h"

class NhanVien : public CanBo
{
    string task;
    public:
    void add_office();
    void get_office();
};

#endif