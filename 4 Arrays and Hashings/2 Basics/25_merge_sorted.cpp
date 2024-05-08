#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i = 0, j = 0;
    vector<int> arr_out;
    cin >> n >> m;
    int arr_1[n], arr_2[m];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr_1[i];
    }
    for (int i = 0; i <= m - 1; i++)
    {
        cin >> arr_2[i];
    }

    while (i <= n-1 && j <= m-1)
    {
        if (arr_1[i] < arr_2[j])
        {
            arr_out.push_back(arr_1[i]);
            i++;
        }
        else
        {
            arr_out.push_back(arr_2[j]);
            j++;
        }
    }
    while (i <= n - 1)
    {
        arr_out.push_back(arr_1[i]);
        i++;
    }
    while (j <= m - 1)
    {
        arr_out.push_back(arr_2[j]);
        j++;
    }
    for(int x: arr_out){
        cout<<x<<" ";
    }

    return 0;
}