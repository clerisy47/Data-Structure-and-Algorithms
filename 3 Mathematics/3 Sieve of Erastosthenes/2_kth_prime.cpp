#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<int> arr_sieve(n+1, 1);
    vector<int> arr_kth_prime;
    arr_sieve[0]=arr_sieve[1]=0;
    for(int i=2; i*i<=n; i++){
        if(arr_sieve[i]){
            for(int j=i*i; j<=n; j+=i){
                arr_sieve[j]=0;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(arr_sieve[i]){
            arr_kth_prime.push_back(i);
        }
    }
    return arr_kth_prime;
}

int kth_prime(int k){
    return sieve(1000)[k-1];
}

int main(){
    int k;
    cin >> k;
    int kthPrime = kth_prime(k);
    cout << kthPrime << endl;
    return 0;
}