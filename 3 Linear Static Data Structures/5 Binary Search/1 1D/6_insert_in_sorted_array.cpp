// inserts in sorted array making it sorted again (like a set)

#include <bits/stdc++.h>
using namespace std;

void myInsert(vector<int> &v, int k)
{
    auto it = lower_bound(v.begin(), v.end(), k);
    v.insert(it, k);
}

int main()
{
    return 0;
}