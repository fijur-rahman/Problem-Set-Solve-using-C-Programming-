#include <stdio.h>

int main()
{
    double r;
    const float PI=3.14159;
    printf("Enter the Circle Radius(r): ");
    scanf("%lf", &r);
    printf("Area: %.2lf", 2*PI*r);
    return 0;
}
