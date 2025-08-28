#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a>0)
    {
    case 1:
        switch ((a & (a-1))==0)
        {
        case 1:
            printf("Yes.\n");
            break;
        
        default:
            printf("No.\n");
            break;
        }
        break;
    
    case 0:
        switch (a==0)
        {
        case 1:
            printf("Zero is not a valid input");
            break;
        
        default:
            printf("Negative input is not Valid");
            break;
        }
        break;
    }
    return 0;
}
