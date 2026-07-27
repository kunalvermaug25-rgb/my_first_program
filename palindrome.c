#include <stdbool.h>
bool isPalindrome(int x)
{
    // Negative numers are not pallindrome
    if (x < 0)
        return false;

    int original = x;
    long long reverse = 0;

    while (x !=0)
    {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }

    if (original == reverse)
        return true;
    else
        return false;
}