// https://leetcode.com/problems/implement-trie-prefix-tree/description/
// https://www.naukri.com/code360/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *child[26];

    int ctrPrefix = 0; // no need this variable if question only asks related to startsWith and search only
    int ctrEndWith = 0; // // this variable can be bool if question only asks related to startsWith and search only

    bool containsKey(char ch)
    {
        return (child[ch - 'a'] != NULL);
    }

    Node *get(char ch)
    {
        return child[ch - 'a'];
    }

    void put(char ch, Node *node)
    {

        child[ch - 'a'] = node;
    }

    void increaseEnd()
    {
        ctrEndWith++;
    }

    void increasePrefix()
    {
        ctrPrefix++;
    }

    void deleteEnd()
    {
        ctrEndWith--;
    }

    void reducePrefix()
    {
        ctrPrefix--;
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

            if (!node->containsKey(word[i]))
            {
                node->put(word[i], new Node());
            }

            node = node->get(word[i]);
            node->increasePrefix();
        }
        node->increaseEnd();
    }

    // bool startsWith(string prefix)
    // {
    //     Node *node = root;
    //     for (int i = 0; i <= prefix.size() - 1; i++)
    //     {
    //         if (!node->containsKey(prefix[i]))
    //         {

    //             return false;
    //         }
    //         node = node->get(prefix[i]);
    //     }
    //     return true;
    // }

    int countWordsStartingWith(string prefix)
    {
        Node *node = root;
        for (int i = 0; i <= prefix.size() - 1; i++)
        {
            if (node->containsKey(prefix[i]))
            {
                node = node->get(prefix[i]);
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
    //         if (!node->containsKey(word[i]))
    //         {

    //             return false;
    //         }
    //         node = node->get(word[i]);
    //     }
    //     return node->ctrEndWith != 0;
    // }

    int countWordsEqualTo(string word)
    {
        Node *node = root;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (node->containsKey(word[i]))
            {
                node = node->get(word[i]);
            }
            else
            {
                return 0;
            }
        }
        return node->ctrEndWith;
    }

    void erase(string word)
    {
        Node *node = root;

        for (int i = 0; i <= word.size() - 1; i++)
        {

            if (node->containsKey(word[i]))
            {
                node = node->get(word[i]);
                node->reducePrefix();
            }
            else
            {
                return;
            }
        }

        node->deleteEnd();
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
