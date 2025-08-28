#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a==0)
    {
    case 1:
        printf("Zero is not a Valid Input");
        return 0;
    }
    switch (a<0)
    {
    case 1:
        printf("Negative input is not valid");
        return 0;
    }
    switch (a>0 && (a & (a-1)) ==0 )
    {
    case 1:
        printf("Yes\n");
        break;
    case 0:
        printf("No\n");
        break;
    }
    return 0;
}
