#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Take any string
    string s1 = "Geeks";

    // Copy two characters of s1 (starting
    // from position 3)
    string s2 = s1.substr(3, 2);

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

    cout << "String is: " << sub;

    // checks for substring
    s1 = "Imissubunny";
    s2 = "ssu";
    cout << (s1.find(s2) != string::npos);

    string s3 = "5032";
    int a3 = stoi(s3);
    long long a4 = stoll(s3);   // use this for long long
    long double a5 = stold(s3); // for long double

    // for any containers .size() is O(1)
}