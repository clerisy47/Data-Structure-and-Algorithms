#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    // cin.ignore(); // this needs to be done as the cursor will be just after the cin in the past and not in the newline
    // getline(cin, s1); // input whole line till '/n'
    // getline(cin, s1, ','); //  custom delimiter
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

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout << s1 << " " << s2 << endl;

    string s3 = "5032";
    int a3 = stoi(s3);
    long long a4 = stoll(s3);   // use this for long long
    long double a5 = stold(s3); // for long double

    // for any containers .size() is O(1)
}