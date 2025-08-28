#include <stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("(2.3 + 5.8 -1.1) * 3.5 - 2.3/3.5 = %f\n", (a+b+c)*d-a/d);
    return 0;
}
