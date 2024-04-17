// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

int countDigits(int num)
{
    int count = 0, rem, copy_num = num;
    while (copy_num != 0)
    {
        rem = copy_num % 10;
        if (num % rem == 0)
            count += 1;
        copy_num /= 10;
    }
    return count;
}

// Time Complexity: O(log10n)

// if simply count the digits then
// everytime loops run count+=1
// floor(log10(x)) + 1  for best time and space complexity