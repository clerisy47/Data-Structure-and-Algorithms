// https://leetcode.com/problems/implement-trie-prefix-tree/description/
// https://www.naukri.com/code360/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h>
using namespace std;

// modify/remove the attributes and functions according to the question
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
            node->ctrPrefix++;
        }
        node->ctrEndWith++;
    }

    void erase(string &word)
    {
        Node *node = root;

        for (int i = 0; i <= word.size() - 1; i++)
        {

            if (node->containsChar(word[i]))
            {
                node = node->getChild(word[i]);
                node->ctrPrefix--;
            }
            else
            {
                return;
            }
        }
        node->ctrEndWith--;
    }

    // bool startsWith(string &prefix)
    // {
    //     Node *node = root;
    //     for (int i = 0; i <= prefix.size() - 1; i++)
    //     {
    //         if (!node->containsChar(prefix[i]))
    //         {

    //             return false;
    //         }
    //         node = node->getChild(prefix[i]);
    //     }
    //     return true;
    // }

    int countWordsStartingWith(string &prefix)
    {
        Node *node = root;
        for (int i = 0; i <= prefix.size() - 1; i++)
        {
            if (node->containsChar(prefix[i]))
            {
                node = node->getChild(prefix[i]);
            }
            else
            {
                return 0;
            }
        }

        return node->ctrPrefix;
    }

    // bool search(string &word)
    // {
    //     Node *node = root;
    //     for (int i = 0; i <= word.size() - 1; i++)
    //     {
    //         if (!node->containsChar(word[i]))
    //         {

    //             return false;
    //         }
    //         node = node->getChild(word[i]);
    //     }
    //     return node->ctrEndWith != 0;
    // }

    int countWordsEqualTo(string word)
    {
        Node *node = root;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (node->containsChar(word[i]))
            {
                node = node->getChild(word[i]);
            }
            else
            {
                return 0;
            }
        }
        return node->ctrEndWith;
    }
};

// TC: O(N) (for every method)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
