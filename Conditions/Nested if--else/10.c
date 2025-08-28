#include <stdio.h>

int main()
{
    double a,b;
    char x;
    scanf("%lf %c %lf", &a, &x, &b);
    if (x == '+')
    {
        printf("Addition: %.2lf", a+b);
    }
    else if (x == '-')
    {
        printf("Subtraction: %.2lf", a-b);
    }
    else if (x == '*')
    {
        printf("Multiplication: %.0lf", a*b);
    }
    else if (x == '/')
    {
        if (b !=0)
        {
            printf("Division: %.6lf", a/b);
        }
        else
        {
            printf("Division: Zero as divisor is not Valid");
        }
    }
    else
    {
        printf("Invalid oparator or input");
    }
    return 0;
}
