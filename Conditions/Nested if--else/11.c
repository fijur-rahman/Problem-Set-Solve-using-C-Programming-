#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    if (a < 0 || a> 100)
    {
        printf("Invalid Input. Plz input 0 to 100\n");
    }
    else
    {
        if (a >=90 && a <=100)
        {
            printf("Grade: A");
        }
        else if (a >= 86 && a <=89)
        {
            printf("Grade: A-");
        }
        else if (a >=82 && a <=85)
        {
            printf("Grade: B+");
        }
        else if (a >=78 && a <=81)
        {
            printf("Grade: B");
        }
        else if (a >=74 && a <=77)
        {
            printf("Grade: B-");
        }
        else if (a >= 70 && a <=73)
        {
            printf("Grade: C+");
        }
        else if (a >=66 && a <=69)
        {
            printf("Grade: C");
        }
        else if (a >=62 && a <=65)
        {
            printf("Grade: C-");
        }
        else if (a >=58 && a <=61)
        {
            printf("Grade: D+");
        }
        else if (a >=55 && a <=57)
        {
            printf("Grade: D");
        }
        else 
        {
            printf("Grade: F");
        }
    }
    return 0;
}
