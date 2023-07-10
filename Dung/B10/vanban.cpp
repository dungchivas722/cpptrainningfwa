#include "vanban.h"

Text :: Text() {}

Text :: Text(string st) : st(st){}

Text :: ~Text(){}

void Text :: setText(string st)
{
    this->st = st;
}

string Text :: getText()
{
    return this->st;
}


void Text :: countA()
{
    int count = 0;
    int i;
    for (i = 0; i < st.length(); i++)
    {
        if (tolower(char(st[i])) == 'a') 
        {
            count++;
        }
    }
    cout << "So luong phan tu A(a): " << count << endl;
}

void Text :: textNormalization()
{  
    stringstream ss(st);
    vector<string> tmp;
    string a;
    while(ss>>a){
        tmp.push_back(a);
    }
    cout<<"Van ban sau khi chuan hoa:";
    for(auto x :tmp){
        cout<<x<<" ";
    }
    cout<<endl;
    tmp.clear();
}