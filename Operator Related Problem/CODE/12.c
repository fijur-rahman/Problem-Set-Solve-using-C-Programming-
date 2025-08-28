#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the number respectively(a,b,c): ");
    scanf("%d%d%d", &a, &b, &c);
    if ((b*b - 4*a*c) >=0)
    {
        printf("%.2f\t%.2f\n", (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a) , (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a));
    }
    else
    {
        printf("Imaginary\n");
    }
    
    return 0;
}
