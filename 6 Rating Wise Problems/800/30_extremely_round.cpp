#include <bits/stdc++.h>
using namespace std;

int N = 1e7;
vector<int> arr(N, 0);

bool check(int n)
{
    int ctr = 0;
    for (int i = n; i != 0; i /= 10)
    {
        if (i % 10 != 0)
        {
            ctr++;
        }
    }
    return ctr == 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= N - 1; i++)
    {
        if (check(i))
        {
            arr[i] = 1;
        }
        arr[i] += arr[i - 1];
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}