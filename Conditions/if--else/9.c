#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if ((x >= 'a' && x <= 'z') ||(x >= 'A' && x <= 'Z'))
    {
        printf("Alpahabet.\n");
    }
    else if (x >='0')
    {
        printf("Digit");
    }
    else
    {
        printf("Special\n");
    }
    
    return 0;
}
