// Input a string, output the capital words in each lines

#include <bits/stdc++.h>
using namespace std;

string toUpper(string &str)
{
    for (int i = 0; i <= str.size()-1; i++)
        {
            str[i]=str[i]+'A'-'a';
        }
    return str;
}

int main()
{
    while (true)
    {
        string str;
        cin >> str; // cin takes individual input so no need to split
        if (str.size() == 0)
        {
            break;
        }
        toUpper(str);
        cout<<str<<endl;
    }
    return 0;
}