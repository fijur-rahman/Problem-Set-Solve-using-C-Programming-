#include <stdio.h>

int main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    printf("95.401 + 22.622 = %.3f\n", a+b);
    printf("95.401 - 22.622 = %.3f\n", a-b);
    printf("95.401 * 22.622 = %f\n", a*b);
    printf("95.401 / 22.622 = %f\n", a/b);
    return 0;
}
