// Triangular numbers are the numbers which can be represented by summation of natural numbers

int sum(int n)
{
    return n * (n + 1) / 2;
}
bool isTriangular(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (sum(i) == n)
            return 1;
    }
    return 0;
}
