#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &arr)
{
    int goal = arr.size() - 1;
    for (int i = goal - 1; i >= 0; i--) 
    {
        if (i + arr[i] >= goal) // the jump length given is the maximum jump length hence we can jump less than it as well
            goal = i;
    }
    return goal == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}