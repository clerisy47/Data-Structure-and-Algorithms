// https://leetcode.com/problems/is-subsequence/description/

#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s1, string s) {
    int i=0, i1=0;
    for(;i<=(int)s.size()-1 && i1<=(int)s1.size()-1; i++){
        if(s[i]==s1[i1]){
            i1++;
        }
    }
    return i1==s1.size();
}
