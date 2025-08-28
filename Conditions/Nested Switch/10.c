#include <stdio.h>

int main()
{
    double a,b;
    char x;
    scanf("%lf %c %lf", &a, &x, &b);
    switch (x)
    {
    case '+':
        printf("Addition: %.2lf", a+b);
        break;
    case '-':
        printf("Subtraction: %.2lf", a-b);
        break;
    case '*':
        printf("Multiplication: %.0lf", a*b);
        break;
    case '/':
        switch (b!=0)
        {
        case 1:
            printf("Division: %.6lf", a/b);
            break;
        default:
             printf("Division: Zero as divisor is not Valid");
            break;
        }
    }
    return 0;
}