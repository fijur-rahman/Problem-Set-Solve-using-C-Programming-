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
       if (a==0)
       {
        printf("Zero is not a Valid Input ");
       }
       else
       {
        printf("Negative input is not Valid");
       }
       
    }
    return 0;
}