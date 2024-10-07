// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/IRSTXOR

// Given two numbers, find two numbers that is their xor such that their product is maximum and return the product.
// Note that number of bits of two numbers <= than that of c

#include <bits/stdc++.h>
using namespace std;

#define int long long

// using bitwise operations
int calculate_product(int n) {
    int a = 0, b = 0;
    int o = log2(n) + 1;
    for (int i = 0; i < o; i++) {
        int t = 1 << i;
        if (i == o - 1) {
            a |= t;
            b &= (~t);
        } else if (n & t) {
            a &= (~t);
            b |= t;
        } else {
            a |= t;
            b |= t;
        }
    }
    return a * b;
}

// using bitset
int calculate_product2(int n) {
    bitset<64> a(n), b, c;
    int t = 0;
    int o = log2(n) + 1;
    for (int i = 0; i < o; i++) {
        if (a[i]) {
            b[i] = 0;
            c[i] = 1;
            t = i;
        } else {
            b[i] = 1;
            c[i] = 1;
        }
    }
    b[t] = 1;
    c[t] = 0;
    return b.to_ullong() * c.to_ullong();
}
