#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);
double triangleArea(double a, double  );
void displayRounding(double c);

int main()
{
    double a, b, c, area;

    printf("Enter side a: ");
    scanf("%lf", &a);

    printf("Enter side b: "); 
    scanf("%lf", &b);

    c = hypotenuse(a, b);

    area = triangleArea(a, b);

    printf("Hypotenuse: %.2lf\n", c);

    displayRounding(c);

    printf("Area: %.2lf\n", area);

    return 0;
}
// Function to calculate hypotenuse
double hypotenuse(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

// Function to calculate area
double triangleArea(double a, double b)
{
    return 0.5 * a * b;
}

// Function to display rounded values
void displayRounding(double c)
{
    printf("Rounded up: %.0lf\n", ceil(c));
    printf("Rounded down: %.0lf\n", floor(c));
}