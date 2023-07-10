#include "quanlythemuon.h"

quanly::quanly() {}

quanly::~quanly() {
    for (TheMuon* theMuon : list_the_muon) {
        if (theMuon != nullptr)
        {
            delete theMuon;
        }
    }
    list_the_muon.clear();
}

void quanly::them(){
    TheMuon* ptr;
    cout<<"Enter info for loan card : "<<endl;
    ptr = new TheMuon();
    ptr->insert(list_ma);
    list_the_muon.push_back(ptr);
}
void quanly::xoa_ma(){
    int ma;
    cout<<"Enter form code: ";
    cin>>ma;
    if (list_ma.count(ma)==0)
    {
        cout<<"Not found!!"<<endl;
        return;
    }
    else{
        for (int i = 0; i < list_the_muon.size(); i++)
        {
            if (list_the_muon.at(i)->getMaPhieuMuon()==ma)
            {
                list_the_muon.erase(list_the_muon.begin()+i);
            }
            
        }
    }
    
}
void quanly::hienthi(){
    cout<<"=========INFO LOAN CARDS========"<<endl;
    if (list_the_muon.size()==0)
    {
        cout<<"Empty!!"<<endl;
    }
    else{
        for (int i = 0; i < list_the_muon.size(); i++)
            {
                cout<<"The muon thu "<<i+1<<": "<<endl;
                list_the_muon.at(i)->display();
            }
        }
}

void quanly::them_map()
{
    cout << "Nhap thong tin the muon : " << endl;
    unique_ptr<TheMuon>ptr(new TheMuon());
    ptr->insert_map();
    if (list_ma_map.count(ptr->getMaPhieuMuon()) == 0)
    {
        list_ma_map.insert(pair<int,unique_ptr<TheMuon>>(ptr->getMaPhieuMuon(), move(ptr))); // đây là insert map                                                                 //  ls_map.insert(list_ma_type::value_type(ptr->ma_phieu(),ptr));//syntax kieu typedef
    }
    else
    {
        cout << "=============== ma phieu da ton tai! =================" << endl;
        cout << "Nhap lai thong tin the muon thu : " << endl;
        ptr->insert_map();
    }
}
void quanly::xoa_map()
{
    int ma;
    cout << "Nhap vao ma phieu muon xoa: ";
    cin >> ma;
    list_ma_map.erase(ma);
}
void quanly::hienthimap()
{
    cout << "=========THONG TIN DANH SACH THE MUON========" << endl;
    auto ret = list_ma_map.begin();
    while (ret != list_ma_map.end())
    {
        ret->second->display();
        ret++;
    }
    
}