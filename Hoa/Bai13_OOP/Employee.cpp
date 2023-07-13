#include "Employee.h"

const char* BirthdayException :: what() const throw() 
{
    return "Invalid birthday!";
}

const char* EmailException :: what() const throw() 
{
    return "Invalid email!";
}

const char* PhoneException :: what() const throw() 
{
    return "Invalid phone number!";
}

const char* FullNameException :: what() const throw() 
{
    return "Invalid fullname!";
}

/* Syntax: dd/mm/yyyy */

bool CheckValidBirthday(const string& birthday) 
{
    regex birthdayPattern("^(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/\\d{4}$");
    return regex_match(birthday, birthdayPattern);
}

/* Syntax: abc@abc.xx -> xx: At least 2 characters */

bool CheckValidEmail(const string& email) 
{
    regex emailPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return regex_match(email, emailPattern);
}

bool CheckValidName(const string& fullname) 
{
    return (fullname.length() > 0);
}

/* Exactly 10 digits */

bool CheckValidPhoneNumber(const string& phone) 
{
    regex phonePattern(R"(\d{10})");
    return regex_match(phone, phonePattern);
}

Employee :: Employee(){}

Employee :: Employee(string id, string fullname, string birthday, string phone, string email, int employee_type)
    : id(id), fullname(fullname), birthday(birthday), phone(phone), email(email), employee_type(employee_type){}

/* Delete employee's certificate */

Employee :: ~Employee()
{
    certificates.clear();
}

void Employee :: enterEmployee()
{
    /* Check valid name */

    do
    {
        cin.ignore();
        cout << "Enter fullname: ";
        getline(cin, fullname);

        try                                                 
        {
            if (false == CheckValidName(fullname)) 
            {
                throw FullNameException();
            }
        } 
        catch (const FullNameException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == CheckValidName(fullname));
    
    /* Check valid date */

    do
    {
        cout << "Enter birthday (dd/mm/yyyy): ";
        cin >> birthday;

        try 
        {
            if (false == CheckValidBirthday(birthday))
            {
                throw BirthdayException();
            }
        } 
        catch (const BirthdayException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    }
    while (false == CheckValidBirthday(birthday));

    /* Check valid phone */

    do
    {
        cout << "Enter phone: ";
        cin >> phone;

        try 
        {
            if (false == CheckValidPhoneNumber(phone))
            {
                throw PhoneException();
            }
        } 
        catch (const PhoneException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == CheckValidPhoneNumber(phone));
    
    /* Check valid email */

    do
    {
        cout << "Enter email: ";
        cin >> email;

        try 
        {
            if (false == CheckValidEmail(email))
            {
                throw EmailException();
            }
        } 
        catch (const EmailException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == CheckValidEmail(email));
}

void Employee :: showEmployee()
{
    cout << "ID: " << id << endl;
    cout << "Fullname: " << fullname << endl;
    cout << "Birthday: " << birthday << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}

void Employee :: addCertificate()
{
    Certificate tmpCer;
    int choice;
    
    do
    {
        cout << "Enter certificate!" << endl;
        cout << "1. Enter data" << endl;
        cout << "0. Escape" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case ENT:
            {
                tmpCer.enterCertificate();
                certificates.push_back(tmpCer);
                break;
            }              
            
            case ESC:
            {
                cout << "End of enter certificate" << endl;
                break;
            }

            default:
            {
                cout << "Your choice is not valid";
                break;
            }
        }
    } 
    while (ESC != choice);
}

void Employee :: showCertificate()
{
    for (Certificate certificate : certificates)
    {
        cout << endl;
        certificate.showCertificate();
    }
}

void Employee :: deleteCertificate()
{
    certificates.clear();
}

string Employee :: getID()
{
    return this->id;
}

void Employee :: setID(string id)
{
    this->id = id;
}

void Employee :: setEmployeeType(int employee_type)
{
    this->employee_type = employee_type;
}

int Employee :: getEmployeeType()
{
    return this->employee_type;
}

void Employee :: setEmployeeCount(int employee_count)
{
   this->employee_count = employee_count;
}

int Employee :: getEmployeeCount()
{
    return this->employee_count;
}