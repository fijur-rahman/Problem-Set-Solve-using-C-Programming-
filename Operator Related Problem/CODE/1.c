#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two Integer: ");
    scanf("%f%f", &a, &b);
    printf("Addition: %.1f\n", a+b);
    printf("Subtraction: %.1f\n", a-b);
    printf("Multiplication: %.1f\n", a*b);
    printf("Quotient: %.0f\n", a/b);
    printf("Reminder: %d\n", (int)a%(int)b);
    return 0;
}
