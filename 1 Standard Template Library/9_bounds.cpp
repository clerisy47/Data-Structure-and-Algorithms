// find: returns iterator of first element
// works for sorted or unsorted
// binary_search: does arr[i]==k (target) exists
// lower_bound: smallest iterator such that arr[i]>=k (target)
// upper_bound: smallest iterator such that arr[i]>k (target)
// if all elements are smaller than target it returns length of array ie hypothetical index (n)
// if multiple elements are present then it returns first index
// O(logn) assumes that array is sorted, for unsorted it does undefined behaviour

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

int main()
{

    vector<int> v = {4, 6, 8, 25, 7};

    cout << binary_search(v.begin(), v.end(), 6); // returns bool

    auto loc = find(v.begin(), v.end(), 25); // returns reference to the element if present or returns end() iterator
    cout << loc - v.begin() << " ";          // arithetic on iterator to return index

    auto bound = lower_bound(v.begin(), v.end(), 6); // returns iterator
    cout << bound - v.begin() << endl;               // 1

    bound = upper_bound(v.begin(), v.end(), 6);
    cout << bound - v.begin() << endl; // 2

    bound = upper_bound(v.begin(), v.end(), 26);
    cout << bound - v.begin() << endl; // 5 (if element isn't present it returns the length of array ie bound==v.end())
    cout << *bound << endl;            // 0

    // For sets and maps, it is recommended to use s.lower_bound() instead of lower_bound()
    set<int> s = {4, 6, 8, 25, 7};
    auto bound_set = s.lower_bound(6);
    cout << *bound_set << endl; // 6 (we can't acess index of set hence returning the element itself)
}