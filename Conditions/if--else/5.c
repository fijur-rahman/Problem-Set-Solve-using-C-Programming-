#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>0 && (a & (a-1)) ==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}
