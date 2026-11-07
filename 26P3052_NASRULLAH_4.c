#include <stdio.h>
float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);
int main()
{
    int start, end, step;
    float f, c;

    printf("Start ");
    scanf("%d", &start);

    printf("End");
    scanf("%d", &end);

    printf("Step: ");
    scanf("%d", &step);

    printTable(start, end, step);

    printf("Enter a temperature in Fahrenheit ");
    scanf("%f", &f);

    c = toCelsius(f);

    printf("Temperature in Celsius: %.1f\n", c);

    return 0;
}
float toFahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32;
}

float toCelsius(float f)
{
    return (f - 32) * 5.0 / 9.0;
}
void printTable(int start, int end, int step)
{
    int i;

    printf("\nCelsius    Fahrenheit\n");

    for (i = start; i <= end; i = i + step)
    {
        printf("%d          %.1f\n", i, toFahrenheit(i));
    }
}
