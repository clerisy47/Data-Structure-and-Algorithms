#include<bits/stdc++.h>
using namespace std;

// Brute force
// Directly by formula of permutation
int facto(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}
// int nPr(int n, int r){
//     return facto(n)/facto(n-r);
// }

// Optimized
// Expanding formula of permutation
int nPr(int n, int r){
    int ans = 1;
	for (int i = 0; i <= r - 1; i++) {
		ans *= (n-i);
	}
	return ans;
}


int main(){
    cout<<nPr(5, 3);
    return 0;
}