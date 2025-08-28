#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Input your three Number: ");
    scanf("%d%d%d", &a, &b, &c);
    // 1= True & 0= False.
    if ((a+b)<= 80 && b>=0)
    {
        printf("1) 1\n"); 
    }
    else 
    {
        printf("1) 0\n");
    }
    if ((a-b) ==0 || c!=0)
    {
        printf("2) 1\n");
    }
    else 
    {
        printf("2) 0\n");
    }
    if (a!=b || (b<a) && c>0)
    {
        printf("3) 1\n");
    }
    else 
    {
        printf("3) 0\n");
    }
    return 0;
}
