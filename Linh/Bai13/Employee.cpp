#include "Employee.h"

const char* birthdayException :: what() const throw() 
{
    return "Invalid birthday!";
}

const char* emailException :: what() const throw() 
{
    return "Invalid email!";
}

const char* phoneException :: what() const throw() 
{
    return "Invalid phone number!";
}

const char* fullNameException :: what() const throw() 
{
    return "Invalid fullname!";
}

bool isValidBirthday(const string& birthday) 
{
    regex birthdayPattern("^(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/\\d{4}$");
    return regex_match(birthday, birthdayPattern);
}

bool isValidEmail(const string& email) 
{
    regex emailPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return regex_match(email, emailPattern);
}

bool isValidName(const string& fullname) 
{
    return (fullname.length() > 0);
}

bool isValidPhoneNumber(const string& phone) 
{
    regex phonePattern(R"(\d{10})");
    return regex_match(phone, phonePattern);
}

Employee :: Employee(){}

Employee :: Employee(string id, string fullname, string birthday, string phone, string email, int employee_type, int employee_count)
    : id(id), fullname(fullname), birthday(birthday), phone(phone), email(email),   \
    employee_type(employee_type), employee_count(employee_count){}

Employee :: ~Employee()
{
    certificates.clear();
}

void Employee :: enterEmployee()
{
    do
    {
        cin.ignore();
        cout << "Enter fullname: ";
        getline(cin, fullname);
        try 
        {
            if (false == isValidName(fullname))
            {
                throw fullNameException();
            }
        } 
        catch (const fullNameException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == isValidName(fullname));
    
    
    do
    {
        cout << "Enter birthday (dd/mm/yyyy): ";
        cin >> birthday;

        try 
        {
            if (false == isValidBirthday(birthday))
            {
                throw birthdayException();
            }
        } 
        catch (const birthdayException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    }
    while (false == isValidBirthday(birthday));

    do
    {
        cout << "Enter phone: ";
        cin >> phone;

        try 
        {
            if (false == isValidPhoneNumber(phone))
            {
                throw phoneException();
            }
        } 
        catch (const phoneException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == isValidPhoneNumber(phone));
    
    do
    {
        cout << "Enter email: ";
        cin >> email;

        try 
        {
            if (false == isValidEmail(email))
            {
                throw emailException();
            }
        } 
        catch (const emailException& ex) 
        {
            cout << "Caught Exception: " << ex.what() << endl;
        }
    } 
    while (false == isValidEmail(email));
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
    for (Certificate x : certificates)
    {
        cout << endl;
        x.showCertificate();
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