#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double Result;
    printf("Enter the Theta: ");
    scanf("%d", &x);
    Result= 2*cos(pow(x,2)) - sqrt(3)*sin(x) + sin(x/2);
    printf("Result: %f\n", Result);
    return 0;
}
