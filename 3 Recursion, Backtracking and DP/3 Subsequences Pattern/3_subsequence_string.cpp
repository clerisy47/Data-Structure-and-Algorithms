// similarly with worse tc but better sc in bit manipulation folder

#include <bits/stdc++.h>
using namespace std;

void generate(int i, string &str_a, string &str_q, vector<string> &arr)
{
    if (i == str_q.size())
    {
        arr.push_back(str_a);
        return;
    }
    // generates non empty strings
    str_a.push_back(str_q[i]);
    generate(i + 1, str_a, str_q, arr);
    str_a.pop_back();

    // generates empty strings
    generate(i + 1, str_a, str_q, arr);

}

vector<string> generateSubsequences(string str_q)
{
    vector<string> arr;
    string str_a;
    generate(0, str_a, str_q, arr);
    return arr;
}

// TC: O(2^n)
// SC: O(n) (recursive stack space)

int main()
{

    return 0;
}