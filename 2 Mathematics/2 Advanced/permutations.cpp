#include <bits/stdc++.h>
using namespace std;

// Brute force
// Directly by formula of permutation
int facto(int n)
{
	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		ans *= i;
	}
	return ans;
}

// int nPr(int n, int r)
// {
// 	return facto(n) / facto(n - r);
// }
// // TC: O(3*n)

// int nCr(int n, int r)
// {
// 	return facto(n) / (facto(n - r) * facto(r));
// }
// // TC: O(3*n)

// Optimized
// Expanding formula of permutation
int nPr(int n, int r)
{
	int ans = 1;
	for (int i = 0; i <= r - 1; i++)
	{
		ans *= (n - i);
	}
	return ans;
}
// TC: O(r)

int nCr(int n, int r)
{
	int ans = 1;
	for (int i = 0; i <= r - 1; i++)
	{
		ans *= (n - i);
		// can't do both in same line as it fails because of integer division
		ans /= (i + 1);
	}
	return ans;
}
// TC: O(r)

int main()
{
	cout << nPr(7, 7) << endl;
	cout << nCr(7, 7);
	return 0;
}