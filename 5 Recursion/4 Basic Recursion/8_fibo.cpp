// 0 1 1 2 3 5 8 13

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

// Time Complexity O(2^n)
// Space Complexity O(n)