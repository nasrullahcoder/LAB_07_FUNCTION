#include <stdio.h> 
void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int choice;
    int a, b;

    do
    {
        showMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter base:\n");
            a = readNonNegative();

            printf("Enter exponent:\n");
            b = readNonNegative();

            printf("Power = %ld\n", power(a, b));
        }

        else if (choice == 2)
        {
            printf("Enter number:\n");
            a = readNonNegative();

            printf("Factorial = %ld\n", factorial(a));
        }

        else if (choice == 3)
        {
            printf("Enter first number:\n");
            a = readNonNegative();

            printf("Enter second number:\n");
            b = readNonNegative();

            printf("GCD = %d\n", gcd(a, b));
        }

        else if (choice == 4)
        {
            printf("Enter first number:\n");
            a = readNonNegative();

            printf("Enter second number:\n");
            b = readNonNegative();

            printf("LCM = %d\n", lcm(a, b));
        }

        else if (choice == 5)
        {
            printf("Enter line length:\n");
            a = readNonNegative();

            printLine(a);
        }

        else if (choice == 6)
        {
            printf("Exiting program...\n");
        }

        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}

// 1. Display menu
void showMenu(void)
{
    printf("\n========== MINI MATH TOOLKIT ==========\n");
    printf("1. Power\n");
    printf("2. Factorial\n");
    printf("3. GCD\n");
    printf("4. LCM\n");
    printf("5. Print Line\n");
    printf("6. Exit\n");
    printf("======================================\n");
}

// 2. Read non-negative number
int readNonNegative(void)
{
    int n;

    do
    {
        printf("Enter a non-negative number: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Negative number is not allowed.\n");
        }

    } while (n < 0);

    return n;
}

// 3. Print line of dashes
void printLine(int length)
{
    int i;

    for (i = 1; i <= length; i++)
    {
        printf("-");
    }

    printf("\n");
}

// 4. Calculate power without pow()
void printLine(int length)
{
    int i;
    long result = 1;

    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

// 5. Calculate factorial
long factorial(int n)
{
    int i;
    long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// 6. Calculate GCD
int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// 7. Calculate LCM using gcd()
int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return (a * b) / gcd(a, b);
}

