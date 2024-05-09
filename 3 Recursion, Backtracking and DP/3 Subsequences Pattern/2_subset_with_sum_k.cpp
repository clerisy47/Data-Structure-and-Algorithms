#include <bits/stdc++.h>
using namespace std;

void generate(int i, vector<int> &arr_ans, vector<int> &arr_question, vector<vector<int>> &ans_arr_arr, int sum, int k)
{
    if (sum > k) // only if array contain positive numbers only
        return;

    if (i == arr_question.size())
    {
        if (sum == k)
        {
            ans_arr_arr.push_back(arr_ans);
        }
        return;
    }

    arr_ans.push_back(arr_question[i]);
    sum += arr_ans[i];
    generate(i + 1, arr_ans, arr_question, ans_arr_arr, sum, k);
    arr_ans.pop_back();
    sum -= arr_ans[i];

    generate(i + 1, arr_ans, arr_question, ans_arr_arr, sum, k);
}

vector<vector<int>> subsets(vector<int> &arr_question, int k)
{
    vector<vector<int>> ans_arr_arr;
    vector<int> arr_ans;
    int sum = 0;
    generate(0, arr_ans, arr_question, ans_arr_arr, sum, k);
    return ans_arr_arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}