#include "QLCB.h"
#include "CongNhan.h"
#include "KySu.h"
#include "NhanVien.h"

void QLCB::addOfficer() 
{
    int choice;
    cout << "1. Add a worker" << endl;
    cout << "2. Add a engineer" << endl;
    cout << "3. Add a staff" << endl;
    cout << "Enter your choice (1 - 3): ";
    cin >> choice;
    cin.ignore();

    string name_, gender_, address_;
    int age_;

    switch (choice) 
    {
        case WORKER: 
        {
            int level_;
            cout << "Enter worker information:" << std::endl;
            cout << "Name: ";
            getline(cin, name_);

            cout << "Age: ";
            cin >> age_;

            cin.ignore();
            cout << "Gender: ";
            getline(cin, gender_);

            cout << "Address: ";
            getline(cin, address_);
            
            cout << "Level: ";
            cin >> level_;
            cin.ignore();

            // CongNhan* congNhan = new CongNhan(name_, age_, gender_, address_, level_);
            shared_ptr <CongNhan> congNhan = make_shared <CongNhan> (name_, age_, gender_, address_, level_);
            canBoList.push_back(congNhan);
            // unique_ptr <CongNhan> congNhan = make_unique <CongNhan> (name_, age_, gender_, address_, level_);
            // danhSachCanBo.push_back(move(congNhan));
            break;
        }
        case ENGINEER: 
        {
            string major_;
            cout << "Enter engineer information:" << std::endl;
            cout << "Name: ";
            getline(cin, name_);

            cout << "Age: ";
            cin >> age_;

            cin.ignore();
            cout << "Gender: ";
            getline(cin, gender_);

            cout << "Address: ";
            getline(cin, address_);
            
            std::cout << "Nghe nghiep: ";
            std::getline(cin, major_);

            // KySu* kySu = new KySu(name_, age_, gender_, address_, major_);
            shared_ptr <KySu> kySu = make_shared <KySu> (name_, age_, gender_, address_, major_);
            canBoList.push_back(kySu);
            // unique_ptr <KySu> kySu = make_unique <KySu> (name_, age_, gender_, address_, major_);
            // danhSachCanBo.push_back(move(kySu));
            break;
        }
        case STAFF: 
        {
            string task_;
            cout << "Enter staff information:" << std::endl;
            cout << "Name: ";
            getline(cin, name_);

            cout << "Age: ";
            cin >> age_;

            cin.ignore();
            cout << "Gender: ";
            getline(cin, gender_);

            cout << "Address: ";
            getline(cin, address_);

            cout << "Cong viec: ";
            getline(cin, task_);

            // NhanVien* nhanVien = new NhanVien (name_, age_, gender_, address_, task_);
            shared_ptr <NhanVien> nhanVien = make_shared <NhanVien> (name_, age_, gender_, address_, task_);
            canBoList.push_back(nhanVien);
            // unique_ptr <NhanVien> nhanVien = make_unique <NhanVien> (name_, age_, gender_, address_, task_);
            // danhSachCanBo.push_back(move(nhanVien));
            break;
        }
        default:
            std::cout << "Your choice is not valid!" << std::endl;
            break;
    }
}

void QLCB :: searchByName(string name)
{
    cout << "____________________________" << endl;
    cout << "Search result by name!" << endl;
    bool found = false;
    for (const auto &x : canBoList)
    {   
        if (x->getName() == name)
        {
            found = true;
            x->showInformation();
            cout << "_____________________________" << endl;
        }
    }

    if (false == found)
    {
        cout << "Not found Canbo with name: " << name << endl;
        cout << "_____________________________" << endl;
    }
}

void QLCB :: printList()
{
    cout << "CanBo list!" << endl;
    for (const auto &x : canBoList)
    {
        x->showInformation();
        cout << "_____________________________" << endl;
    }
}

void QLCB :: escape()
{
    /* 
        Below function for normal pointer 
     */

    // for (const auto &x : canBoList) {
    //     if (NULL != x)
    //         delete x;
    // }
    // canBoList.clear();

    std::cout << "End of program!" << std::endl;
}