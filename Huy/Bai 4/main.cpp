#include <iostream>
#include "KhuPho.h"

using namespace std;

int main()
{
    KhuPho KP;
    KP.add_family();
    cout << "Thong tin cac ho gia dinh trong khu pho:\n ";
    KP.get_family();
    return 0;
}