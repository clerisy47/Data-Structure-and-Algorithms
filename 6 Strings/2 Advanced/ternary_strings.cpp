// https://codeforces.com/problemset/problem/1354/B
#include <bits/stdc++.h>
using namespace std;

bool isValid(string &s, int n)
{
    int arr[4] = {0};
    for (int i = 0; i <= n - 2; i++)
    {
        arr[s[i] - '0']++;
    }
    for (int i = n - 1; i <= s.size() - 1; i++)
    {
        arr[s[i] - '0']++;
        if (arr[1]  && arr[2] && arr[3])
        {
            return true;
        }
        arr[s[i - n + 1] - '0']--;
    }
    return false;
}

int num_substring(string &s)
{
    int L = 3; // least possible s.size()
    int R = s.size();

    while (L <= R)
    {
        int mid = (L + R) / 2;
        if (isValid(s, mid))
        {
            if (!isValid(s, mid - 1))
                return mid;   // minimum possible number of elements that can have 1, 2 and 3
            else
            {
                R = mid - 1;
            }
        }
        else
            L = mid + 1;
    }
    return 0;
}

int main()
{
    string st = "123";
    // string st = "112233";
    cout << num_substring(st);
    return 0;
}