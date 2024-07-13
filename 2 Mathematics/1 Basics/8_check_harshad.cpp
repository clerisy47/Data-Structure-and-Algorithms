// A harshad number in a given number base is an integer that is divisible by the sum of its digits when written in that base. 
bool isHarshad(int n)
{
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}

// Time Complexity O(log10n)