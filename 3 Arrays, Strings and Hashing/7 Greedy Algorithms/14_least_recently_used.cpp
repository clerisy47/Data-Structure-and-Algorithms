// https://www.geeksforgeeks.org/problems/page-faults-in-lru5603/1

// page fault occurs when the page isn't in memory
// when it occurs, we should add page to the memory. If the memory is full we should remove the least recently used page from memory and add it

#include <bits/stdc++.h>
using namespace std;

int ctrPageFaults(vector<int> pages, int capacity)
{
    int n = pages.size();
    unordered_map<int, int> memory;
    // if we want to optimized time in cost of space, we can use a list to do so
    int ctr = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (memory.find(pages[i]) == memory.end())
        {
            if (memory.size() == capacity)
            {
                int mini = 1e9;
                for (auto it : memory)
                {
                    mini = min(it.second, mini);
                }

                memory.erase(memory.find(pages[mini]));
            }
            memory[pages[i]] = i;
            ctr++;
        }
        else // making the pages[i] recently used
        {
            memory[pages[i]] = i;
        }
    }
    return ctr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> pages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }

    int capacity;
    cin >> capacity;

    int faults = ctrPageFaults(pages, capacity);
    cout << faults << "\n";

    return 0;
}