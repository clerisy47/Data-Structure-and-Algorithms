#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void printPair(vector<pair<int, int>> &a)
{
    for (auto &x : a)
    {
        cout << x.first << " " << x.second << endl;
    }
}

bool comparator_fn(int a1, int a2)
{
    return a1 > a2;
}

bool comparator_fn_pair(pair<int, int> a1, pair<int, int> a2)
{
    return a1 > a2;
}
int main()
{
    vector<int> a = {7, 2, 4, 9, 1};

    // ascending order (by default)
    sort(a.begin(), a.end());
    printVec(a);

    // descending order
    sort(a.rbegin(), a.rend());
    sort(a.begin(), a.end(), comparator_fn);
    // or
    sort(a.begin(), a.end(), greater<int>());
    printVec(a);

    // similarly can sort vector of containers as well, first element get priority, then second then third and so on (like on string)
    vector<pair<int, int>> p = {{4, 5}, {5, 7}, {3, 1}, {9, 5}, {4, 3}, {5, 9}};
    sort(p.begin(), p.end(), comparator_fn_pair);
    printPair(p);
}