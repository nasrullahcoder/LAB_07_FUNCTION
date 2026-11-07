#include <stdio.h>
int isPrime(int n);
int isPerfect(int n);
int reverseNumber(int n);
int isPalindrome(int n);
void report(int n);
int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    report(n);

    return 0;
}


int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int reverseNumber(int n)
{
    int digit, reverse = 0;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return reverse;
}

int isPalindrome(int n)
{
    if (n == reverseNumber(n))
        return 1;
    else
        return 0;
}

int digitSum(int n)
{
    int digit, sum = 0;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    return sum;
}

void report(int n)
{
    int i;

    printf("Prime: ");

    if (isPrime(n))
        printf("Yes\n");
    else
        printf("No\n");

    printf("Perfect: ");

    if (isPerfect(n))
        printf("Yes\n");
    else
        printf("No\n");

    printf("Reverse: %d\n", reverseNumber(n));

    printf("Palindrome: ");

    if (isPalindrome(n))
        printf("Yes\n");
    else
        printf("No\n");

    printf("Sum of digits: %d\n", digitSum(n));

    printf("Primes from 1 to %d: ", n);

    for (i = 1; i <= n; i++)
    {
        if (isPrime(i) == 0)
            continue;

        printf("%d ", i);
    }

    printf("\n");
}
