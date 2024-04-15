// return the size of array

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	set<int> s;
	for(int i=0;i<=n-1;i++){
		s.insert(arr[i]); // Each insertion is log n complexity
	}
	int i=0;
	for(auto x:s){
		arr[i]=x;
		i++;
	}
	return i;
}
// Time Complexity: O(nlogn+n)
// Space Complexity: O(n)

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	for(int j=1;j<=n-1;j++){
		if(arr[j]!=arr[i]){
			i++;
			arr[i]=arr[j];
		}
	}
	return i+1;	
}