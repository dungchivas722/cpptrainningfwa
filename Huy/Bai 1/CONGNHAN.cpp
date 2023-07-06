#include "CONGNHAN.h"


void CongNhan:: add_office()
{
    CanBo::add_office();
    cout << "Cap Bac: ";
    cin >> level;
}

void CongNhan:: get_office()
{
    CanBo::get_office();
    cout << "  Cap Bac: " << level << endl;
}

