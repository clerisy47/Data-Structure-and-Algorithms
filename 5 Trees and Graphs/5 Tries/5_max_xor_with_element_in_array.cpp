// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/
#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *child[2];

    bool containsBit(int bit)
    {
        return (child[bit] != NULL);
    }

    Node *getChild(int bit)
    {
        return child[bit];
    }

    void putChild(int bit, Node *node)
    {
        child[bit] = node;
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

    void insert(int num)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1; // get bit
            if (!node->containsBit(bit))
            {

                node->putChild(bit, new Node());
            }
            node = node->getChild(bit);
        }
    }
    int getMax(int num)
    {
        Node *node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1; // get bit
            if (node->containsBit(1 - bit))
            {
                maxNum |= (1 << i); // set bit

                node = node->getChild(1 - bit);
            }
            else
            {
                node = node->getChild(bit);
            }
        }
        return maxNum;
    }
};
int findMaximumXOR(vector<int> &nums)
{

    Trie trie;
    for (auto &it : nums)
    {
        trie.insert(it);
    }
    int maxNum = 0;
    for (auto &it : nums)
    {
        maxNum = max(maxNum, trie.getMax(it));
    }
    return maxNum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}