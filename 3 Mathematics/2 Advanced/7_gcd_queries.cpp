// prints gcd in given array except range l, r (both excluded)

#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    while (y )
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(){
    int t, q, n, l, r, pre[100000], suff[100000], arr[100000];
    cin<<t;
    while(t--){
        cin>>n>>q;
        for(int i=0; i<=n-1; i++){
            cin>> arr[i];
        }
        pre[0] = suff[n+1] = 0; // we're taking indexes from 1 to n so assuming 0th and n+1 th index's gcd is 0 (while taking from left and right resp)
        for(int i=1; i<=n-1; i++){
            pre[i]=mod(pre[i],pre[i-1]);
        }
        for(int i=n; i>=1; i--){
            suff[i]=mod(suff[i],suff[i+1]);
        }
        while(q--){
            cin>>l>>r;
            cout<<gcd(pre[l-1], suff[r+1])<<endl;
        }
    }
    return 0;
}