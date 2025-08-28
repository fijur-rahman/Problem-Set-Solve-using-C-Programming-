#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a>0 && (a & (a-1)) ==0 )
    {
    case 1:
        printf("Yes\n");
        break;
    
    default:
        printf("NO\n");
        break;
    }
    return 0;
}
