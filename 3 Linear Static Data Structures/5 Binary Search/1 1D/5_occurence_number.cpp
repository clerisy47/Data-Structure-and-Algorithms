// https://www.naukri.com/code360/problems/occurrence-of-x-in-a-sorted-array_630456

#include<bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lbound = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
    if (arr[lbound] != k || lbound == n)
        return {-1, -1};
    int ubound = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
    return {lbound, ubound - 1};
}

int count(vector<int>& arr, int n, int k) {
	pair<int, int>first_and_last = firstAndLastPosition(arr, n, k);
	if (first_and_last.first==-1) return 0;
    return first_and_last.second - first_and_last.first + 1;
}

int main(){
    
    return 0;
}