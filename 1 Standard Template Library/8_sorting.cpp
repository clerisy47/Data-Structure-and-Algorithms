#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printPair(vector<pair<int, int>> &v)
{
    for (auto &x : v)
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
    vector<int> arr = {7, 2, 4, 9, 1};

    // ascending order (by default)
    sort(arr.begin(), arr.end());
    printVec(arr);

    // descending order
    sort(arr.begin(), arr.end(), comparator_fn);
    printVec(arr);

    // similarly can sort vector of containers as well, first element get priority, then second then third and so on (like on string)
    vector<pair<int, int>> p = {{4, 5}, {5, 7}, {3, 1}, {9, 5}, {4, 3}, {5, 9}};
    // lambda function
    sort(p.begin(), p.end(), comparator_fn_pair);
    printPair(p);
}