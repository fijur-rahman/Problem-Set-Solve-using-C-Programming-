#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    printf("Val:\t %10.6f\n", a);
    printf("Val: %2.6f\n", a);
    printf("Val: %.2f\n", a);
    printf("Val: %.0f\n", a);
    printf("Val: %e\n", a);
    return 0;
}
