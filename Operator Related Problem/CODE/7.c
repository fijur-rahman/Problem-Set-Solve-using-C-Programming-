#include <stdio.h>

int main()
{
    int a, c;
    float b, d;
    printf("Enter the Integer Number: ");
    scanf("%d", &a);
    printf("Enter the Floating Number: ");
    scanf("%f", &b);
    c=b;    //float to integer Convert by ASSIGNMENT Operation.
    printf("Assignment: %f assignedd to an int produces %d\n", b, c);
    d=a;    //integer to float Convert by ASSIGNMENT Operation.
    printf("Assignment: %d assigned to a float produces %f\n", a, d);
    printf("Type Casting: (float) %d produces %f\n", a, (float)a);
    printf("Type Casting: (int) %f produces %d\n", b, (int)b);
    //printf("%d, %d\n", a,c);
    //printf("%f, %f\n", b,d);
    return 0;
}
