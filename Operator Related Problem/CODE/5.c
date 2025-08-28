#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);

    printf("Incremented Value: %d\n", a+=b);
    printf("Decremented Value: %d\n", a-=b);
    return 0;
}
