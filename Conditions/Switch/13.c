#include <stdio.h>

int main()
{
    double a,b;
    int x,y;
    scanf("%lf %lf", &a, &b);
    printf("1=Addition\n2=Subtraction\n3=Multiplication\n4=Quotient\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Addition: %.2lf", a+b);
        break;
    case 2:
        printf("Subtraction: %.2lf", a-b);
        break;
    case 3:
        printf("Multiplication: %.2lf", a*b);
        break;
    case 4:
        switch (b!=0)
        {
        case 1:
           printf("Which one you want\n1=Quotient\n2=Remaindar\n");
           scanf("%d", &y);
           switch (y)
           {
           case 1:
            printf("Quotient: %.0lf", a/b);
            break;
           case 2:
             printf("Remaindar: %d", ((int)a % (int)b));
             break;
           }
        }
    }
    return 0;
}