#include<bits/stdc++.h>
using namespace std;

// Brute Force: Merge Sort/ Quick Sort

// Hashing
void sortArray(vector<int>& arr, int n)
{
    vector<int> hash(3);
    for(int i=0;i<=n-1;i++){
        hash[arr[i]]++;
    }
    int j=0;
    for(int i=0; i<=hash[0]-1;i++){
        arr[j]=0;
        j++;
    }
    for(int i=0; i<=hash[1]-1;i++){
        arr[j]=1;
        j++;
    }
    for(int i=0; i<=hash[2]-1;i++){
        arr[j]=2;
        j++;
    }
}
// Time Complexity: O(2n)
// Space Complexity: O(1)

// Optimal
// Dutch National Flag Algorithm

void sortArray(vector<int>& arr, int n)
{
    int l=0, m=0, r=n-1;
    while(m<=r){ // When m==r swap should be done as element in r pointer can be unsorted
        if(arr[m]==0) {
            swap(arr[m],arr[l]);
            l++;
            m++;    
        }
        else if(arr[m]==1) m++;
        else {
            swap(arr[m],arr[r]);
            r--;
        }
    }
}
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    
    return 0;
}