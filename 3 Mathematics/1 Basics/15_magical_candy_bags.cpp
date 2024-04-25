// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long inp;
        multiset<long> ms;
        while(n--)
        {
            cin >> inp;
            ms.insert(inp);
        }
        long total_candies = 0;
        while (k--)
        {
            auto max_iter = --ms.end(); // ms.end()-- will decrease after assignment ms.end()-1 won't work for iterators
            long max_ele = *(max_iter); 
            total_candies += max_ele;
            ms.erase(max_iter);        // ms.erase(max_ele); will erase all the values instead use iterator
            ms.insert(max_ele / 2);
        }
        cout << total_candies << endl;
    }
    return 0;
}
