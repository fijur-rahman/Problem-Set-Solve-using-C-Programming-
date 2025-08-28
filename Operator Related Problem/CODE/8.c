#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d%d", &a, &b);
    (a>b)?printf("Max: %d\n", a):printf("Max: %d\n", b);
    return 0;
}
