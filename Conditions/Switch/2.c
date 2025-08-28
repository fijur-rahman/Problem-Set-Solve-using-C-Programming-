#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a%2==0)
    {
    case 1:
        printf("EVEN");
        break;
    case 0:
        printf("ODD");
        break;
    }
    return 0;
}
