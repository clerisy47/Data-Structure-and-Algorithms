// No duplicates in the result array

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray_brute(vector<int> a, vector<int> b)
{
    set<int> temp;
    vector<int> results;
    for (int x : a)
        temp.insert(x); // Insetion in sets take log n time where n varies according to size of set
    for (int x : b)
        temp.insert(x);
    for (int x : temp)
        results.push_back(x);
    return results;
}
// TC: O(n1logn +n2 logn + n) + O(n1+n2)(worse case when intersection is 0)
// SC: O(2(n1+n2)) (for output)

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    vector<int> results;
    int i = 0, j = 0, n1 = a.size(), n2=b.size();
    while (i <= n1-1 && j <= n2-1)
    {
        if (a[i] < b[j])
        {
            if (results.empty()||results.back() != a[i])
            {
                results.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (results.empty()||results.back() != b[j])
            {
                results.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<=n1-1){
                    if (results.size()==0||results.back() != a[i])
            {
                results.push_back(a[i]);
            }
            i++;
    }
    while(j<=n2-1){
                    if (results.back() != b[j])
            {
                results.push_back(b[j]);
            }
            j++;
    }
    return results;
}

// TC:  O(n1+n2)
// SC: O(n1+n2) (for output) (worse case when intersection is 0)

int main()
{

    return 0;
}