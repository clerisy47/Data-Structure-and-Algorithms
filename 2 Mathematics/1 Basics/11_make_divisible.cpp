// given 2 numbers x and y find least number that can be added to x to make it divisble by y

#include <bits/stdc++.h>
using namespace std;

int fun(int x, int y)
{
    return (y - x % y) % y; // extra %y to ensure when x%y is 0 it results in 0 and not y
}