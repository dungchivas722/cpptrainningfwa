#ifndef EMPLOYEE_H
#define EMPLOYEE_H

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

/* 
    Check Date, Email, Name, Phone is valid or not valid
 */

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

        vector <Certificate> certificates; 
    
    public:
        static int employee_count;
        Employee();
        virtual ~Employee();

        /* Set, get ID, type of employee, number of employees */

        void setID(string id);
        string getID();
        void setEmployeeType(int employee_type);
        int getEmployeeType();
        void addEmployeeCount();
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