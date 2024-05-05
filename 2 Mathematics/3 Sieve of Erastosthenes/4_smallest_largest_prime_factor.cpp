// 2<= n <= 100000

#include <bits/stdc++.h>
using namespace std;

int N = 10000;
vector<int> smallest_prime;
vector<int> largest_prime;

void fillSieve()
{
    for (int i = 0; i <= N - 1; i++)
    {
        smallest_prime.push_back(i);
        largest_prime.push_back(i);
    }
    for (int i = 2; i * i <= N - 1; i++)
    {
        if (smallest_prime[i] == i)
        {
            for (int j = i * i; j <= N-1; j += i)
            {
                if (smallest_prime[j] == j)
                    smallest_prime[j] = i;
                largest_prime[j]=i;
            }
        }
    }
}

int main()
{
    fillSieve();
    int n;
    cin >> n;
    cout << smallest_prime[n] << endl;
    cout << largest_prime[n] << endl;
    return 0;
}
