#include <bits/stdc++.h>
using namespace std;

// Brute Force: use set

// Optimal
struct Node
{

    Node *child[26];

    int ctrPrefix = 0;
    int ctrEndWith = 0;

    bool containsChar(char &ch)
    {
        return (child[ch - 'a'] != NULL);
    }

    Node *getChild(char &ch)
    {
        return child[ch - 'a'];
    }

    void addChild(char &ch, Node *node)
    {

        child[ch - 'a'] = node;
    }
};


int countDistinctSubstrings(string &s) // modified insert function with counter and adds each character of substring starting with something at once
{
    Node *root = new Node();
    int ctr = 0, n = s.size();
    for (int i = 0; i <= n - 1; i++)
    {
        Node *node = root;
        for (int j = i; j < n; j++)
        {
            if (!node->containsChar(s[j]))
            {
                node->addChild(s[j], new Node());
                ctr++;
            }
            node = node->getChild(s[j]);
        }
    }
    return ctr + 1; // one unique substring is empty string
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}