#include "NHANVIEN.h"


void NhanVien:: add_office()
{
    CanBo::add_office();
    cout << "Công việc: ";
    getline(cin,task);
}

void NhanVien :: get_office()
{
    CanBo::get_office();
    cout << "  Công việc: " << task << endl;
}