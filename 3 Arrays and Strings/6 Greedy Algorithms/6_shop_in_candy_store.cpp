// https://www.geeksforgeeks.org/problems/shop-in-candy-store1145/1

#include <bits/stdc++.h>
using namespace std;

vector<int> candyStore(int candies[], int n, int k)
{
    int candies_to_buy;
    sort(candies, candies + n);
    if (k != 0)
        candies_to_buy = ceil(1.0 * n / (k+1)); //k+1 because everytime we buy we receive k+1 candies
    else
        candies_to_buy = n;
    return {accumulate(candies, candies + candies_to_buy, 0), accumulate(candies + n - candies_to_buy, candies + n, 0)};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}