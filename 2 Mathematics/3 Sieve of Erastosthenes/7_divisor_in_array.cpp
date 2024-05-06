// Given an array perform queries on it with two integers x and y and return the count of multiples of number of x or y or both

#include <bits/stdc++.h>
using namespace std;
int N = 2e5 + 7;
vector<int> hash_arr(N);
vector<int> ctr_multiples(N);


void fillSieve()
{
    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = i; j <= N - 1; j += i)
        {
            ctr_multiples[i] += hash_arr[j];
        }
    }
}

void inputVectorAndHash(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int x;
        cin>>x;
        hash_arr[x]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n;
    inputVectorAndHash(n);
    fillSieve();
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int lcm = n1 *1LL* n2 / __gcd(n1, n2);
        int ans = ctr_multiples[n1] + ctr_multiples[n2];
        cout << ans << endl;
    }
    // for(int i=0; i<=50; i++){
    //     cout<<i<<":"<<ctr_multiples[i]<<" ";
    // }
    return 0;
}