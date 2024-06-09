// Duplicates allowed in the result array if both arrays have same duplicates


#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> results;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                results.push_back(arr1[i]);
                break;
            }
        }
    }
    return results;

}
// TC: O(n1*n2)
// SC: O(min(n1, n2)) (worse case)

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> results;
    int i = 0, j = 0;
    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] == arr2[j])
        {
            results.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return results;

}

// TC: O(n1+n2)
// SC: O(min(n1, n2)) (worse case)

int main() {
    // Example usage of findArrayIntersection function
    vector<int> arr1 = {1, 2, 3, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    
    // Call the function and get the result
    vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    // Display the result
    cout << "Intersection of arrays: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
