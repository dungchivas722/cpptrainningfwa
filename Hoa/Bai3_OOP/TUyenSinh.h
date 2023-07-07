#ifndef __TUyenSinh
#define __TUyenSinh


#include<vector>
#include <memory>
#include"ThiSinhKA.h"
#include"ThiSinhKB.h"
#include"ThiSinhKC.h"
#include"Define.h"

using namespace std;
class TuyenSinh
{
public:
    vector<shared_ptr<ThiSinh>> list_students;
	void add();
	void show();
	void search_ID_number();
	~TuyenSinh();

};


#endif