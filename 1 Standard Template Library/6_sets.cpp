#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    s.insert("abc"); // O(logn)
    s.insert("def"); // O(logn)
    s.erase("abc");
    cout << (s.find("def") == s.end()) << " "; // 1: Not Present 0: Present O(logn)

    // same difference as ordered map and unordered map
    unordered_set<string> us;
    us.insert("abc");
    us.insert("def"); // O(1)
    us.insert("ghi");

    us.erase("abc");                             // O(1)
    cout << (s.find("poop") == s.end()) << endl; // 1: Not Present 0: Present O(1)
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    set<int> a = {1, 2, 3, 4};
    set<int> b = {2, 3, 4, 5};
    set<int> ans;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(ans, ans.begin()));
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(ans, ans.begin()));
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(ans, ans.begin()));
    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(ans, ans.begin()));

    bool isSubset = includes(a.begin(), a.end(), b.begin(), b.end());

    // Multisets allow duplicates.
    // It will sort like regular sets as it is implemented in similar way ie red black trees (self balancing trees)

    multiset<string> ms;
    ms.insert("a");
    ms.insert("b");
    ms.insert("c");
    ms.insert("a");
    ms.insert("a");
    // Deletes first value:
    ms.erase(ms.find("a"));
    for (auto x : ms)
    {
        cout << x << " ";
    }
    cout << endl;
    // Delete all values:
    ms.erase("a");

    // iterating reversely
    for (auto it = ms.rbegin(); it != ms.rend(); it++)
    {
        cout << *it << " ";
    }
    ms.erase(ms.begin()); // deletes first element
    ms.erase(--ms.end()); // deletes last element
}