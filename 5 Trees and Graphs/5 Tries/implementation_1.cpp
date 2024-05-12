// https://leetcode.com/problems/implement-trie-prefix-tree/description/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void setEnd()
    {
        flag = true;
    }

    bool isEnd()
    {
        return flag;
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
        }
        node->setEnd();
    }

    bool startsWith(string prefix)
    {
        Node *node = root;
        for (int i = 0; i <= prefix.size() - 1; i++)
        {
            if (!node->containsKey(prefix[i]))
            {

                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }

    bool search(string word)
    {
        Node *node = root;
        for (int i = 0; i <= word.size() - 1; i++)
        {
            if (!node->containsKey(word[i]))
            {

                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Trie trie;
    cout << "Inserting words: Striver, Striving, String, Strike" << endl;
    trie.insert("striver");
    trie.insert("striving");
    trie.insert("string");
    trie.insert("strike");

    cout << "Search if Strawberry exists in trie: " << (trie.search("strawberry") ? "True" : "False") << endl;

    cout << "Search if Strike exists in trie: " << (trie.search("strike") ? "True" : "False") << endl;

    cout << "If words is Trie start with Stri: " << (trie.startsWith("stri") ? "True" : "False") << endl;

    return 0;

    return 0;
}