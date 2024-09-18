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
    cout<<string(5, 'a')<<endl; // create a string og 5 as

    string s3 = "dogfsdfdsklds:cat";

    // Find position of ':' using find()
    int pos = s3.find(":");

    s3[4] = tolower(s3[4]); // if there is no valid letter or letter is already lower, it doesn't do anything
    s3[5] = toupper(s3[5]);
    // removes 1 character starting from 0th character
    s3.erase(0, 1);

    cout << s3 << endl;

    // Copy substring starting from index 5
    string sub = s3.substr(5);

    cout << "SubString is: " << sub << endl;

    // Copy substring starting from index 5 of length 4 
    sub = s3.substr(5, 4);

    cout << "SubString is: " << sub<<endl;

    // checks for substring
    s1 = "Imissubunny";
    s2 = "ssu";
    cout << (s1.find(s2) != string::npos);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout << s1 << " " << s2 << endl;

    string s4 = "5032";
    int a3 = stoi(s4);          // string to integer conversion
    long long a4 = stoll(s4);   // use this for long long
    long double a5 = stold(s4); // for long double

    // for any containers .size() is O(1)
}