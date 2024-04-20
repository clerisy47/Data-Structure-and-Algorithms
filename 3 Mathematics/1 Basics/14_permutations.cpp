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
int permutation(int n, int r){
    return facto(n)/facto(n-r);
}

// Optimized
// Expanding formula of permutation
int permutation(int n, int r){
    int ans = 1;
	for (int i = n; i >= n - r + 1; i--) {
		ans *= i;
	}
}


int main(){
    
    return 0;
}