#ifndef __QLCB
#define __QLCB


#include"CONGNHAN.h"
#include"KISU.h"
#include"NHANVIEN.h"
#include<vector>
#include"Define.h"


class QLCB
{
    vector<CanBo*> list_ofices;
    public:
    void AddCanBo();
    void Display();
    void search_name(string str);
    ~QLCB();

};

#endif