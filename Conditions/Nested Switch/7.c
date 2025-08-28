#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    switch (a>b)
    {
    case 1:
        printf("%d is greater than %d", a,b);
        break;
    case 0:
        switch (a==b)
        {
        case 1:
            printf("%d is equal to %d", a, b);
            break;
        
        default:
            printf("%d is less than %d", a, b);
            break;
        }
        break;
    }
    return 0;
}
