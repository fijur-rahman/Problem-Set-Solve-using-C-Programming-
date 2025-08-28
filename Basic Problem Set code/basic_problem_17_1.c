#include <stdio.h>

int main()
{
    int H_cm, meter, centimeter;
    scanf("%d", &H_cm);
    meter =H_cm / 100;
    centimeter =H_cm %100;
    printf("%d meter %d centimeter", meter, centimeter);
    return 0;
}
