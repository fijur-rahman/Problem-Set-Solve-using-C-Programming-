#include <stdio.h>

int main()
{
    int h_in, feet, inch;
    scanf("%d", &h_in);
    feet = h_in/12;
    inch = h_in%12;
    printf("%d feet %d inch", feet, inch);
    return 0;
}
