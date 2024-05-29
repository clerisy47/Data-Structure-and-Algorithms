#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Pair initialization and printing
    pair<int, string> p;
    // p = make_pair(2, "pair");
    // p = {2, "pair"};
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;

    // Deep copy
    cout << "Deepcopy" << " ";
    pair<int, string> p_deep_copy = p;
    p_deep_copy.first = 1;
    cout << p.first << " " << p.second << endl;

    // Shallow copy
    cout << "Pass by reference" << " ";
    pair<int, string> &p_shallow_copy = p;
    p_shallow_copy.first = 1;
    cout << p.first << " " << p.second << endl;

    // Take any string
    string s1 = "Geeks";

    // Copy two characters of s1 (starting
    // from position 3)
    string s2 = s1.substr(3, 2);

    // prints the result
    cout << "String is: " << s2 << endl;

    string s = "dog:cat";

    // Find position of ':' using find()
    int pos = s.find(":");

    // Copy substring after pos
    string sub = s.substr(pos + 1);

    // removes 1 character starting from 0th character 
    s.erase(0, 1);

    cout << "String is: " << sub << endl;

    // Copy substring before pos
    // Extract everything before the ":" in the string
    // "dog:cat".
    sub = s.substr(0, pos);

    // prints the result
    cout << "String is: " << sub;

    // checks for substring
    s1 = "Imissubunny";
    s2 = "ssu";
    cout << (s1.find(s2) != string::npos);

    // for any containers .size() is O(1)
}