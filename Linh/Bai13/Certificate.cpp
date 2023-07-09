#include "Certificate.h"

Certificate :: Certificate(){}

Certificate :: Certificate(string cerID, string cerName, string cerRank, string cerDate)
    : cerID(cerID), cerName(cerName), cerRank(cerRank), cerDate(cerDate) {}

Certificate :: ~Certificate(){}

void Certificate :: enterCertificate()
{
    cout << "Enter information of certificate!" << endl;
    cout << "Certificate ID: ";
    cin >> cerID;
    cout << "Certificate Name: ";
    cin >> cerName;
    cout << "Certificate Rank: ";
    cin >> cerRank;
    cout << "Certificated Date: ";
    cin >> cerDate;
}

void Certificate :: showCertificate() 
{
    cout << "Certificate ID: " << cerID << endl;
    cout << "Certificate Name: " << cerName << endl;
    cout << "Certificate Rank: " << cerRank << endl;
    cout << "Certificated Date: " << cerDate << endl;
}