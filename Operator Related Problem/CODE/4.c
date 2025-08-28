#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("X++ : %d\n", num++);
    printf("++X : %d\n", ++num);
    printf("X-- : %d\n", num--);
    printf("--X : %d\n", --num);
    return 0;
}
