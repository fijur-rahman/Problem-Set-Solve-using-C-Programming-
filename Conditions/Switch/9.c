#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    switch ((x >= 'a' && x <= 'z') ||(x >= 'A' && x <= 'Z'))
    {
    case 1:
        printf("Alpahabet\n");
        break;
    case 0:
        switch (x>='0')
        {
        case 1:
            printf("Digit\n");
            break;
        default:
            printf("Special\n");
            break;
        }
    }
    return 0;
}
