#include <stdio.h>

int main()
{
    int a, b, c, sum;
    scanf("%d%d%d", &a, &b, &c);
    sum=a+b+c;
    switch (sum == 180)
    {
    case 1:
        switch (a>0 && a<180 && b>0 && b<180 && c>0&& c<180)
        {
        case 1:
            printf("Yes, Triangle\n");
            break;
        
        default:
            printf("No, Not Triangle\n");
            break;
        }
        break;
    default:
        printf("No, Not Triangle.\n");
        break;
    }
    return 0;
}
