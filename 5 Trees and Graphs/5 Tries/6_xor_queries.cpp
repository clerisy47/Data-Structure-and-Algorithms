// https://leetcode.com/problems/maximum-xor-with-an-element-from-array/description/

#include <bits/stdc++.h>
using namespace std;

// can apply brute force but it will be O(q*n)

// optimal
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

vector<int> maximizeXor(vector<int> &arr, vector<vector<int>> &queries) //{{x, maxEle}}
{
    vector<int> ans(queries.size(), -1);          // if no ans then -1
    multimap<int, pair<int, int>> offlineQueries; // use multimap because they sort according to x
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= queries.size() - 1; i++)
    {
        offlineQueries.insert({queries[i][1], {queries[i][0], i}}); //{x, {maxEle, query_i}}
    }

    Trie trie;
    int i = 0;
    int n = arr.size();
    for (auto &it : offlineQueries)
    {
        int maxEle = it.first;
        int x = it.second.first;
        int query_i = it.second.second;
        while (i <= n - 1 && arr[i] <= maxEle)
        {
            trie.insert(arr[i]);
            i++;
        }
        if (i != 0) // there should be an element greater than maxEle
            ans[query_i] = trie.getMax(x);
    }
    return ans;
}

// TC:O(M) + O(MlogM) + O(M*32 + N*32)

// SC:O(32*N)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}