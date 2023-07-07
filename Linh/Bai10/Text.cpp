#include "Text.h"

Text :: Text()
{
    
}
Text :: Text(string st)
    : st(st){}

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
        if (('A' == st[i]) || ('a' == st[i]))
        {
            ++count;
        }
    }
    cout << "Number of characters A in the above text: " << count << endl;
}

void Text :: textNormalization()
{
    stringstream ss(st);
    string word;
    vector <string> v;
    while (ss >> word)
    {
        v.push_back(word);
    }

    int i;
    for (i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 1];
}