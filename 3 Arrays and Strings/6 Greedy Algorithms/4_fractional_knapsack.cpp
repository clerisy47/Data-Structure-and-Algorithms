// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

#include <bits/stdc++.h>
using namespace std;

// using multisets
double maximumValue(vector<pair<int, int>> &items, int n, int w) // {weight, value}
{
    multimap<double, pair<int, int>> mp;
    double max_value = 0;
    int max_weight = 0;
    for (auto &it : items)
    {
        double valuePerWeight = 1.0 * it.second / it.first;
        mp.insert({valuePerWeight, {it.first, it.second}});
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    { // iterating reversely through largest to lowest
        auto x = *it;
        int curr_weight = x.second.first, curr_value = x.second.second;
        if (max_weight + curr_weight > w)
        {
            max_value += x.first * (w - max_weight);
            break;
        }
        max_weight += curr_weight;
        max_value += curr_value;
        cout << max_weight << " " << max_value << endl;
    }
    return max_value;
}

// using comaparator

bool comparator(pair<int, int> &a, pair<int, int> &b)
{
    double r1 = (double)a.second / a.first;
    double r2 = (double)b.second / b.first;
    return r1 > r2;
}
double maximumValue(vector<pair<int, int>> &items, int n, int w) // {weight, value}
{
    sort(items.begin(), items.end(), comparator);

    double max_value = 0;
    int max_weight = 0;
    for (auto &item : items)
    {
        if (max_weight + item.first > w)
        {
            double remain = w - max_weight;
            max_value += item.second * (remain / item.first);
            break;
        }
        max_weight += item.first;
        max_value += item.second;
    }
    return max_value;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].first >> items[i].second;
    }

    double maxValue = maximumValue(items, n, w);
    cout << maxValue << "\n";

    return 0;
}