// https://www.naukri.com/code360/problems/complete-string_2687860?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *child[26];

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

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    void insert(string &word)
    {
        Node *node = root;

        for (int i = 0; i <= word.size() - 1; i++)
        {

            if (!node->containsChar(word[i]))
            {
                node->addChild(word[i], new Node());
            }

            node = node->getChild(word[i]);
        }
        node->ctrEndWith++;
    }

    bool isComplete(string &word) // modified search
    {
        Node *node = root;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (!node->containsChar(word[i]))
            {

                return false;
            }
            node = node->getChild(word[i]);
            if (node->ctrEndWith == 0) // modified here to check if prefix ends as well
            { 
                return false;
            }
        }
        return node->ctrEndWith != 0;
    }
};

string completeString(int n, vector<string> &a)
{
    Trie trie;
    string maxString;
    for (auto &it : a)
    {
        trie.insert(it);
    }
    for (auto &it : a)
    {
        if (trie.isComplete(it))
        {
            if (it.size() > maxString.size())
            {
                maxString = it;
            }
            else if (it.size() == maxString.size())
            {
                maxString = min(maxString, it);
            }
        }
    }
    if (maxString == "")
        return "None";
    return maxString;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
