#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if ((x >= 'a' && x <= 'z') ||(x >= 'A' && x <= 'Z'))
    {
        printf("Alphabet\n");
    }
    else
    {
        if (x>= '0')
        {
            printf("Digit\n");
        }
        else
        {
            printf("Special\n");
        }
    }
    
    return 0;
}
