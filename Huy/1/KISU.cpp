#include "KISU.h"


void KiSu:: add_office()
{
    CanBo::add_office();
    cout << "Nganh dao tao: ";
    cin >> major;
}

void KiSu :: get_office()
{
    CanBo::get_office();
    cout << "  Nganh dao tao: " << major << endl;
}