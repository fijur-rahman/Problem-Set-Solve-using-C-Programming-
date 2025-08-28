#include <stdio.h>
#include <math.h>

int main()
{
    float u, a, s;
    scanf("%f%f%f", &u, &a, &s);
    printf("v = %.2f\n", sqrt(u*u+2*a*s));
    return 0;
}
