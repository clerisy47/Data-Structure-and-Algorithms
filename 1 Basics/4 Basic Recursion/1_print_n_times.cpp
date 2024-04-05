#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printNTimes(int n)
    {

        if (n == 0)
        {
            return;
        }
        printNTimes(n - 1);
        cout << "Utsav"<< " ";


 
    }
};
int main()
{
    int n;
    Solution sol;
    cout << "Enter the number of times to print: ";
    cin >> n;

    sol.printNTimes(n);

    return 0;
}