// https://www.naukri.com/code360/problems/implement-trie_1387095?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *links[26];

    int ctrEndWith = 0;

    int ctrPrefix = 0;

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void put(char ch, Node *node)
    {

        links[ch - 'a'] = node;
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

    int countWordsStartingWith(string word)
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

        return node->ctrPrefix;
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
