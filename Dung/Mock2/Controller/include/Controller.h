#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include <vector>
#include "View.h"
#include "Model.h"

class Controller
{
private:
    View view;
    Model model;
public:
    Controller();
    ~Controller();
    void runMenu(); // tạo menu lựa chọn
};


#endif