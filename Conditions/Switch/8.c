#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    switch ((year % 4 ==0 && year %100 !=0) || (year%400==0))
    {
    case 1:
        printf("Yes\n");
        break;
    
    default:
        printf("NO\n");
        break;
    }
    return 0;
}
