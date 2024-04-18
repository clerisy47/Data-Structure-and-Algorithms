// Harshad or n is a number that can be divided by its sum of digits

bool checkHarshad(int n)
{
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}

// Time Complexity O(log10n)