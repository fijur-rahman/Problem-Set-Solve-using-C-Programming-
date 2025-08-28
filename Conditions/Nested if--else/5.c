#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>0)
    {
        if ((a & (a-1))==0)
        {
            printf("Yes.\n");
        }
        else 
        {
            printf("No.\n");
        }
    }
    else
    {
        printf("No.Invalid\n");
    }
    return 0;
}
