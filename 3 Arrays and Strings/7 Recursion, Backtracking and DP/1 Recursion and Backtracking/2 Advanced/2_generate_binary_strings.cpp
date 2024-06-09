// no consecutive one allowed

#include <bits/stdc++.h>
using namespace std;

void generate(int i, string &str, vector<string> &ans, int n)
{
    if (i == n)
    {
        ans.push_back(str);
        return;
    }
    if (str[i - 1] != '1') // remove this if you want to generate just binary strings without any condition
    {
        str.push_back('1');
        generate(i + 1, str, ans, n);
        str.pop_back();
    }

    str.push_back('0');
    generate(i + 1, str, ans, n);
    str.pop_back();
}

vector<string> generateSubsequences(int n)
{
    vector<string> ans;
    string str;
    generate(0, str, ans, n);
    return ans;
}
void printVector(vector<string> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> ans = generateSubsequences(n);
    printVector(ans);
    return 0;
}