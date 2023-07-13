#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string.h>
#include <vector>
#include <regex>

#include "Certificate.h"

using namespace std;

enum choice     /* Choice for add Certificate */
{
    ENT = 1,
    ESC = 0
};

/* 
    Birthday, email, phone, name Exception
 */

class BirthdayException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class EmailException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class PhoneException : public exception 
{
    public:
        virtual const char* what() const throw();
};

class FullNameException : public exception 
{
    public:
        virtual const char* what() const throw();
};

/* 
    Check Date, Email, Name, Phone is valid or not valid
 */

bool CheckValidDate(const string& birthday);
bool CheckValidEmail(const string& email);
bool CheckValidName(const string& fullname);
bool CheckValidPhoneNumber(const string& phone);

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

        /* Set, get ID, type of employee, number of employees */

        void setID(string id);
        string getID();
        void setEmployeeType(int employee_type);
        int getEmployeeType();
        void setEmployeeCount(int employee_count);
        int getEmployeeCount();

        /* Enter, show employee */

        virtual void enterEmployee();
        virtual void showEmployee() = 0;

        /* Add, delete, show certificates of employee */

        void addCertificate();
        void showCertificate();
        void deleteCertificate();
};

#endif /* EMPLOYEE_H */