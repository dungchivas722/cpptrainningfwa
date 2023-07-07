#ifndef __KhuPho
#define __KhuPho

#include "HoGiaDinh.h"
#include<set>
class KhuPho
{
    public:
    set<int> s_ID_card;
    vector<HoGiaDinh> list_family;
    void add_family();
    void get_family();  
    ~KhuPho(); 
};
#endif 