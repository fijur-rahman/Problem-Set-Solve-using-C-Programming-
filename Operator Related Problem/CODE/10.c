#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Input your three Number: ");
    scanf("%d%d%d", &a, &b, &c);
    // 1= True & 0= False.
    if ((a+b) <= 80)
    {
        printf("a) 1\n"); 
    }
    else 
    {
        printf("a) 0\n");
    }
    if (!(a+c))
    {
        printf("b) 1\n");
    }
    else 
    {
        printf("b) 0\n");
    }
    if (a!=0)
    {
        printf("c) 1\n");
    }
    else 
    {
        printf("c) 0\n");
    }
    return 0;
}
