// stacks and queues can be replaced by list

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

    // use list instead of stacks and queues as it is combinartion of both
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(6);
    l.push_back(5);

    l.pop_front();
    l.pop_back();

    while (!l.empty())
    {
        cout << l.back() << endl;
        // cout << l.front() << endl;
        l.pop_back();
    }

    return 0;
}
