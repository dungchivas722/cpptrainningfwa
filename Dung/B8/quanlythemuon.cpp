#include "quanlythemuon.h"

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