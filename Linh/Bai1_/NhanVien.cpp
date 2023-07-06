#include "NhanVien.h"

using namespace std;

NhanVien :: NhanVien(string name, int age, string gender, string address, string task) 
    : CanBo(name, age, gender, address), task(task){}

void NhanVien :: setTask(string task)
{
    this->task = task;
}

string NhanVien :: getTask()
{
    return this->task;
}

void NhanVien :: enterInformation()
{
    CanBo :: enterInformation();
    cout << "Enter task: ";
    cin >> task;
    cin.ignore();
}

void NhanVien :: showInformation() const
{
    cout << "Staff Information!" << endl;
    CanBo :: showInformation();
    cout << "Task: " << this->task << endl;
}