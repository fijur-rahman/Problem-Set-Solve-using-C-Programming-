#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a>0)
    {
    case 1:
        printf("Positive.\n");
        break;

    case 0:
        switch (a==0)
        {
        case 1:
            printf("Zero.\n");
            break;
        default:
            printf("Negative.\n");
            break;
        }
    }
    return 0;
}
