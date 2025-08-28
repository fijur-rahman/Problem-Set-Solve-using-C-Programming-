#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    switch (year % 400 == 0)
    {
    case 1:
        printf("Yes.\n");
        break;
    case 0:
        switch ((year % 4 ==0 && year %100 !=0))
        {
        case 1:
            printf("Yes.\n");
            break;
        
        default:
            printf("No.\n");
            break;
        }
        break;
    }
    return 0;
}
