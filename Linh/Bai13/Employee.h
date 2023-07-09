#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string.h>
#include <vector>
#include <regex>

#include "Certificate.h"

using namespace std;

enum choice
{
    ENT = 1,
    ESC = 0
};

class birthdayException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class emailException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class phoneException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class fullNameException : public exception 
{
    public:
        virtual const char* what() const throw();
};

bool isValidDate(const string& birthday);
bool isValidEmail(const string& email);
bool isValidName(const string& fullname);
bool isValidPhoneNumber(const string& phone);

class Employee
{
    protected:
        string id;
        string fullname;
        string birthday;
        string phone;
        string email;

        int employee_type;
        int employee_count;

        vector <Certificate> certificates;
    
    public:
        Employee();
        Employee(string id, string fullname, string birthday, string phone, string email, int employee_type);
        virtual ~Employee();

        void setID(string id);
        string getID();
        void setEmployeeType(int employee_type);
        int getEmployeeType();
        void setEmployeeCount(int employee_count);
        int getEmployeeCount();

        virtual void enterEmployee();
        virtual void showEmployee() = 0;

        void addCertificate();
        void showCertificate();
        void deleteCertificate();
};

#endif /* EMPLOYEE_H */