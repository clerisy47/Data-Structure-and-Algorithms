#include <bits/stdc++.h>
using namespace std;

int main()
{
    bitset<16> bset1(5); // stores 5 in binary in string like datastructure
    // it stores in reverse as 1010000 not in 000101 so, apply loop accordingly
    bitset<16> bset2; // stores 0
    // Set some bits
    bset1[1] = 1;
    bset1[3] = 1;

    // Print the bitset
    cout << "Bitset: " << bset1 << endl;

    // Convert bitset to long long
    long long ll = bset1.to_ullong();
    cout << "Bitset as long long: " << ll << endl;

    int first_set = bset1._Find_first();

    int last_set = -1;
    for (int i = bset1.size() - 1; i >= 0; --i)
    {
        if (bset1[i])
        {
            last_set = i;
            break;
        }
    }
    cout << "Last set bit: " << last_set << endl;

    bitset<16> bset2(10);
    cout << "Bitset2: " << bset2 << endl;
    cout << "Bitset1 AND Bitset2: " << (bset1 & bset2) << endl;
    cout << "Bitset1 OR Bitset2: " << (bset1 | bset2) << endl;
    cout << "Bitset1 XOR Bitset2: " << (bset1 ^ bset2) << endl;
    cout << "Bitset1 left shift 2: " << (bset1 << 1) << endl;
    cout << "Bitset1 right shift 2: " << (bset1 >> 1) << endl;

    // Flip all bits
    bset1.flip();
    cout << "Flipped Bitset: " << bset1 << endl;

    // Count the number of set bits
    cout << "Number of set bits: " << bset1.count() << endl;

    // Reset all bits
    bset1.reset();
    cout << "Reset Bitset: " << bset1 << endl;

    cout << "Pop Count" << endl;
    int n = 5;
    long long o = 7;
    cout << __builtin_popcount(n) << endl;   // number of set bits in the number
    cout << __builtin_popcountll(o) << endl; // number of set bits in the ll number

    return 0;
}