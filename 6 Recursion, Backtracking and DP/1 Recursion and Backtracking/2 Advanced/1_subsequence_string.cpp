// similarly with worse tc but better sc in bit manipulation folder

#include <bits/stdc++.h>
using namespace std;

void generate(int i, string &str_ans, string &str_question, vector<string> &ans_arr)
{
    if (i == str_question.size())
    {
        ans_arr.push_back(str_ans);
        return;
    }
    // pushes non empty character to the string_ans
    str_ans.push_back(str_question[i]);
    generate(i + 1, str_ans, str_question, ans_arr);
    str_ans.pop_back(); // backtracking

    // pushes non empty character to the string_ans
    generate(i + 1, str_ans, str_question, ans_arr);
}

vector<string> generateSubsequences(string str_question)
{
    vector<string> ans_arr;
    string str_ans;
    generate(0, str_ans, str_question, ans_arr);
    return ans_arr;
}

// TC: O(2^n)
// SC: O(n) (recursive stack space)

int main()
{

    return 0;
}