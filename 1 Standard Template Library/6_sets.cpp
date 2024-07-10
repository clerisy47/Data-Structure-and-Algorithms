#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("def");                           // O(logn)
    cout << (s.find("def") == s.end()) << " "; // 1: Not Present 0: Present O(logn)

    // same difference as ordered map and unordered map
    unordered_set<string> us;
    s.insert("abc");
    s.insert("def"); // O(1)
    s.insert("ghi");
    s.erase(s.begin());                  // O(1) deletes first element
    s.erase(--s.end());                  //  deletes last element
    cout << (s.find("poop") == s.end()); // 1: Not Present 0: Present O(1)
    cout << endl;
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

    // Insertion and acess is O(logn) where n varies according to the size of set
    // Duplicates can be used
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
}