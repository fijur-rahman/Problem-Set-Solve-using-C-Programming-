#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    switch (a>=90 && a <=100)
        {
        case 1:
            printf("Grade: A");
            break;
        }
    switch (a >= 86 && a <=89)
        {
        case 1:
            printf("Grade: A-");
            break;
        }
    switch (a >=82 && a <=85)
        {
        case 1:
            printf("Grade: B+");
            break;
        }
    switch (a >=78 && a <=81)
        {
        case 1:
            printf("Grade: B");
            break;
        }
    switch (a >=74 && a <=77)
        {
        case 1:
            printf("Grade: B-");
            break;
        }
    switch (a >= 70 && a <=73)
        {
        case 1:
            printf("Grade: C+");
            break;
        }
    switch (a >=66 && a <=69)
        {
        case 1:
            printf("Grade: C");
            break;
        }
    switch (a >=62 && a <=65)
        {
        case 1:
            printf("Grade: C-");
            break;
        }
    switch (a >=58 && a <=61)
        {
        case 1:
            printf("Grade: D+");
            break;
        }
    switch (a >=55 && a <=57)
        {
        case 1:
            printf("Grade: D");
            break;
        }
    switch (a>=0 && a<=54)
        {
        case 1:
            printf("Grade: F");
            break;
        }
    switch (a < 0 || a > 100)
    {
    case 1:
        printf("Invalid Input");
        break;
    }
    return 0;
}
