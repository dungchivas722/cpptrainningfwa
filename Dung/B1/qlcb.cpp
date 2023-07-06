#include "qlcb.h"

QLCB::~QLCB()
{
    for (canbo *canbo : canbolist)
    {
        if (canbo != nullptr)
        {
            delete canbo;
        }
    }
}

void QLCB::themcanbo()
{
    int choice;
    cout << "Enter type  (1. Cong nhan, 2. Ky su, 3. Nhan vien): ";
    cin >> choice;
    cin.ignore();

    bool choicecorrect = true;
    canbo* canboptr = nullptr;

    switch (choice){
    case CONGNHAN:
        {
            canboptr = new congnhan();
            break;
        }
    case KYSU:
        {
            canboptr = new kysu();
            break;
        }
    case NHANVIEN:
        {
            canboptr = new nhanvien();
            break;
        }
    default:
        {
            choicecorrect = false;
            break;
        }
    }
    if (choicecorrect) {
    canboptr->nhapthongtin();
    canbolist.push_back(canboptr);
    }
    else {
        std::cout << "Error choise" << std::endl;
    }

}
void QLCB::hienthicanbo()
{
    if (canbolist.empty())
    {
        std::cout << "List empty." << std::endl;
        return;
    }

    std::cout << "Danh sach can bo:" << std::endl;
    for (canbo *canBo : canbolist)
    {
        canBo->xuatthongtin();
        std::cout << "-------------------" << std::endl;
    }
}

void QLCB::timkiemtheoten()
{
    string hotensearch;
    cout << "Enter name for search: ";
    getline(std::cin, hotensearch);

    bool found = false;
    for (canbo *canbo : canbolist)
    {
        if (canbo->getname() == hotensearch)
        {
            canbo->xuatthongtin();
            found = true;
        }
    }

    if (!found)
    {
        std::cout << "Not found name: " << hotensearch << std::endl;
    }
}
