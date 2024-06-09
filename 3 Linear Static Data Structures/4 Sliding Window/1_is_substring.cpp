#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string &s1, string &s2) // s2 in substring of s1
{
    bool ans = false;
    for (int i = 0, j = 0; i <= s1.size() - 1; i++)
    {
        while (i <= s1.size() - 1 && j <= s2.size() - 1 && s1[i] == s2[j])
        {
            i++;
            j++;
        }
        if (j == s2.size())
        {
            ans = true;
            break;
        }
        else
        {
            j = 0;
        }
    }
    return ans;
}

//  stl function: (s1.find(s2) != string::npos);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1;
    cin >> s2;

    if (isSubstring(s1, s2))
    {
        cout << "The second string is a substring of the first string.\n";
    }
    else
    {
        cout << "The second string is not a substring of the first string.\n";
    }

    return 0;
}