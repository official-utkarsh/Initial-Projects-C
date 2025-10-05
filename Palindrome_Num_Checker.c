// Check whether a number is a "Palindrome".

#include <stdio.h>

int main()
{
    int a, b, c, d, e, rev;
    printf("Enter a three number: ");
    scanf("%d", &a);
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    rev = 100 * b + 10 * d + 1 * e;

    if (rev == a)
    {
        printf("The number is Palindrome!");
    }
    else
    {
        printf("The number is not Palindrome!");
    }

    return 0;
}