// https://leetcode.com/problems/implement-trie-prefix-tree/description/
// https://www.naukri.com/code360/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *child[26];

    int ctrPrefix = 0; // no need this variable if question only asks related to startsWith and search only
    int ctrEndWith = 0; // // this variable can be bool if question only asks related to startsWith and search only

    bool containsChar(char ch)
    {
        return (child[ch - 'a'] != NULL);
    }

    Node *getChild(char ch)
    {
        return child[ch - 'a'];
    }

    void addChild(char ch, Node *node)
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

    void insert(string word)
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

    void erase(string word)
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

    // bool startsWith(string prefix)
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

    int countWordsStartingWith(string prefix)
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

    // bool search(string word)
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Trie trie;
    trie.insert("apple");
    trie.insert("app");
    cout << "Inserting strings 'apple', 'app' into Trie" << endl;
    cout << "Count Words Equal to 'apple': ";
    cout << trie.countWordsEqualTo("apple") << endl;
    cout << "Count Words Starting With 'app': ";
    cout << trie.countWordsStartingWith("app") << endl;
    cout << "Erasing word 'app' from trie" << endl;
    trie.erase("app");
    cout << "Count Words Equal to 'apple': ";
    cout << trie.countWordsEqualTo("apple") << endl;
    cout << "Count Words Starting With 'app': ";
    cout << trie.countWordsStartingWith("app") << endl;
    return 0;
}
