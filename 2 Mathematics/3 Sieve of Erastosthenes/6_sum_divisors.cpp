#include <bits/stdc++.h>
using namespace std;

int N = 1000;
vector<vector<int>> divisors(N);
vector<int> sumDivisors(N);

void fillSieve()
{
    for (int i = 1; i<= N - 1; i++) // i*i<= N-1 only for prime factors
    {
        for (int j = i; j <= N - 1; j += i)
        {
            divisors[j].push_back(i);
            sumDivisors[j] += i;
        }
    }
    // Time Complexity: O(n * log log n)
    // Space Complexity: O(n)
}
void printVector(vector<int> &vec)
{
    for (const auto &val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fillSieve();
    int n;
    cin >> n;
    vector<int> div = divisors[n];
    printVector(div);
    cout << sumDivisors[n];
    return 0;
}