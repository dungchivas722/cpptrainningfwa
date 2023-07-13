#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
#include <vector>
#include <Model.h>
using namespace std;

class View
{  
public:
    View();
    ~View();
    void showThongTinMenu();
    string getList();
    string getFile();
};

#endif