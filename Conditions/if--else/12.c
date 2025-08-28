#include <stdio.h>

int main()
{
    double a,b;
    int x;
    scanf("%lf %lf", &a, &b);
    printf("1=Addition\n2=Subtraction\n3=Multiplication\n4=Division\n");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Addition: %.2lf", a+b);
    }
    else if (x == 2)
    {
        printf("Subtraction: %.2lf", a-b);
    }
    else if (x == 3)
    {
        printf("Multiplication: %.0lf", a*b);
    }
    else if (x == 4)
    {
        if (b !=0)
        {
            printf("Quotient: %.0lf", a/b);
        }
        else
        {
            printf("Zero as divisor is not Valid");
        }
    }
    else
    {
        printf("Invalid operator or input (1 to 4)");
    }
    return 0;
}
