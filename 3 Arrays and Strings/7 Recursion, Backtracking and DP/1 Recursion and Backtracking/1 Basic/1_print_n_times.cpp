#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n)
{

    if (n == 0)
    {
        return;
    }
    printNTimes(n - 1);
    cout << "Utsav"
         << " ";
}

int main()
{
    int n;
    cout << "Enter the number of times to print: ";
    cin >> n;
    printNTimes(n);

    return 0;
}