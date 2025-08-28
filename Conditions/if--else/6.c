#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>0 && (a & (a-1)) ==0)
    {
        printf("Yes\n");
    }
    else if (a==0)
    {
        printf("Zero is not a valid Input\n");
    }
    else if (a <0)
    {
        printf("Negative input is not valid");
    }
    else 
    {
        printf("No\n");
    }
    
    return 0;
}
