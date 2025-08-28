#include <stdio.h>

int main()
{
    double a, b, x;
    printf("Enter the two Integer NUM: ");
    scanf("%lf%lf", &a, &b);
    x = (3.31*(a*a) + 2.01* (b*b*b)) / (7.16* (b*b)+2.01*(a*a*a));
    printf("X= %f", x);
    return 0;
}
