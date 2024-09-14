// stacks and queues can be replaced by deque

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Pair initialization and printing
    pair<int, string> p;
    // cin >> p.first >> p.second;
    // p = make_pair(2, "pair");
    p = {2, "pair"};
    cout << p.first << " " << p.second << endl;

    // Unlike vectors they are deep copy by default
    cout << "Deepcopy" << " ";
    pair<int, string> p_deep_copy = p;
    p_deep_copy.first = 1;
    cout << p.first << " " << p.second << endl;

    // Shallow copy
    cout << "Shallow Copy" << " ";
    pair<int, string> &p_shallow_copy = p;
    p_shallow_copy.first = 1;
    cout << p.first << " " << p.second << endl;

    vector<pair<int, int>> a = {{3, 5}, {1, 3}, {1, 7}};
    sort(a.begin(), a.end());
    // it sort elements by giving priority to first element than to second element

    // use deque instead of stacks and queues as it is combination of both
    deque<int> d;
    d.push_front(4);
    d.push_front(6);
    d.push_back(2);
    d.push_back(3);
    d.push_back(5);

    d.pop_front();
    d.pop_back();

    cout << "Element at 2 index is " << d[2] << endl; // can also acess elements like vector at O(1);

    cout << "Elements of deque are" << endl;
    while (!d.empty()) // or !d.size()
    {
        cout << d.back() << endl;
        cout << d.front() << endl;
        d.pop_back();
    }

    return 0;
}
