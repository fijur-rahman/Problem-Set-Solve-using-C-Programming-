#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    switch (a>0)
    {
    case 1:
        printf("Positive");
        break;
    case 0:
        switch (a<0)
        {
        case 1:
            printf("Negative");
            break;
        default:
            printf("Zero");
            break;
        }
        break;
    }
    return 0;
}
