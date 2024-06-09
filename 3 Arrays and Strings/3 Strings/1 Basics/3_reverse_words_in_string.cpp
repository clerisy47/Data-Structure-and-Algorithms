#include <bits/stdc++.h>
using namespace std;

// both solutions are based on greedy approach

// without using reverse function
string reverseWords(string &str)
{
    string word, ans;
    for (char &ch : str)
    {
        if (ch != ' ')
        {
            word.push_back(ch);
        }
        else if (word != "") // since the question suggests if there are more spaces, trim them to just one
        {
            ans = word + " " + ans;
            word = "";
        }
    }
    if (word != "")
        ans = word + " " + ans;
    ans.pop_back(); // popping back the space due to the first word
    return ans;
}

// using reverse function
// memory optimal for some reason
string reverseWords(string &str)
{
    string word, ans;
    for (auto it = str.rbegin(); it != str.rend(); it++)
    {
        char ch = *it;
        if (ch != ' ')
        {
            word.push_back(ch);
        }
        else if (word != "")
        {
            reverse(word.begin(), word.end());
            ans += word + " ";
            word = "";
        }
    }
    if (word == "")
        ans.pop_back();
    else
    {
        reverse(word.begin(), word.end());
        ans += word;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}