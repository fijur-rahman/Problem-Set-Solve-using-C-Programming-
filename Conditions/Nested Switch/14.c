#include <stdio.h>

int main()
{
    double a, b;
    int x, y;
    scanf("%lf %lf", &a, &b);
    printf("1=Addition\n2=Subtraction\n3=Multiplication\n4=Division\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Addition: %.2lf\n", a + b);
        break;

    case 2:
        printf("Subtraction: %.2lf\n", a - b);
        break;

    case 3:
        printf("Multiplication: %.2lf\n", a * b);
        break;

    case 4:
        switch (b != 0)
        {
        case 1:
            printf("Which one you want?\n1=Quotient\n2=Remainder\n");
            scanf("%d", &y);
            switch (y)
            {
            case 1:
                printf("Quotient: %.0lf\n", a / b);
                break;
            case 2:
                printf("Remainder: %d\n", ((int)a % (int)b));
                break;
            default:
                printf("Invalid choice for division operation.\n");
                break;
            }
        break;
        case 0:
            printf("Error: Divisor is zero.\n");
            break;
        }
    break;

    default:
        printf("Invalid operator choice. Please select 1 to 4.\n");
        break;
    }

    return 0;
}
