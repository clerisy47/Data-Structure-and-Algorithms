#include<bits/stdc++.h>
using namespace std;

int N = 1000;
vector<int> smallest_prime;

void fillSieve()
{
    for (int i = 0; i <= N - 1; i++)
    {
        smallest_prime.push_back(i);
    }
    for (int i = 2; i * i <= N - 1; i++)
    {
        if (smallest_prime[i] == i)
        {
            for (int j = i * i; j <= N-1; j += i)
            {
                if (smallest_prime[j] == j)
                    smallest_prime[j] = i;
            }
        }
    }
}

vector<int> primeFactorization(int n){
    vector<int> primeFactors;
    while(n!=1){
       int  primeFactor = smallest_prime[n];
        primeFactors.push_back(primeFactor);
        while(n%primeFactor==0){
            n/=primeFactor;
        }
    }
    return primeFactors;
}
//TC: O(logn) (except precomputation)

void printVector(vector<int>& vec) {
    for(const auto& val : vec) {
        cout << val << ' ';
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fillSieve();
    int n;
    cin>>n;
    vector<int> primeFactors = primeFactorization(n);
    printVector(primeFactors);
    return 0;
}