#ifndef __ThiSinh
#define __ThiSinh

#include<iostream>
#include<string>
#include<set>

using namespace std;
class ThiSinh
{
protected:
	string  name, address;
	int priority,ID_number;
public:
	void add_student();
	virtual void get_student();
	int get_ID_number();
	void set_ID_number(int ID_number);
	virtual ~ThiSinh();
};
#endif

