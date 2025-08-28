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
    
    default:
        printf("No.\n");
        break;
    }
    return 0;
}
