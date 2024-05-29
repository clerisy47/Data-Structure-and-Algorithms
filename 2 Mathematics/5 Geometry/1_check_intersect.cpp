// https://www.geeksforgeeks.org/problems/check-if-two-line-segments-intersect0017/1

#include <bits/stdc++.h>
using namespace std;

int orientation(int p1[2], int p2[2], int p3[2])
{
    int val = (p2[1] - p1[1]) * (p3[0] - p2[0]) - (p2[0] - p1[0]) * (p3[1] - p2[1]); // Equating slope of p1-p2 and p2-p3
    if (val > 0)
    {
        return 1; // clockwise or p3 lie in right side of p1-p2
    }
    if (val == 0)
    {
        return 0; // collinear
    }
    return -1; // anticlockwise or p3 lie in left side of p1-p2
}

bool checkProjection(int a, int b, int c, int d) // if their projection intersects
{
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    return max(a, c) <= min(b, d);
}

bool checkIntersect(int p1[2], int p2[2], int p3[2], int p4[2])
{
    int o1 = orientation(p1, p2, p3);
    int o2 = orientation(p1, p2, p4);
    int o3 = orientation(p3, p4, p1);
    int o4 = orientation(p3, p4, p2);

    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0 && o4 == 0)
    {
        return checkProjection(p1[0], p2[0], p3[0], p4[0]) && checkProjection(p1[1], p2[1], p3[1], p4[1]);
    }

    return false;
}

int main()
{

    return 0;
}