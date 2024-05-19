#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &arr)
{
    for(int i=1; i<= arr.size()-1;i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main()
{
    vector<int> n = {1, 1, 2, 3, 4, 5, 8, 8, 9, 9};
    cout << is_sorted(n);
    return 0;
}
