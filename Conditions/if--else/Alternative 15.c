#include <stdio.h>

int main()
{
    int p1, g1, g2, g3;
    printf("Enter the Number Player 1: ");
    scanf("%d", &p1);
    printf("Enter the 1st Guess Player 2: ");
    scanf("%d", &g1);

    if (p1 == g1)
    {
        printf("Right, Player-2 Wins!");
    }
    else
    {
        printf("Wrong, 2 chances Left!");
        printf("Enter the 2nd Guess Player 2: ");
        scanf("%d", &g2);
        if (p1 == g2)
        {
            printf("Right, Player-2 Wins!");
        }
        else 
        {   printf("Worng, 1 chances Left!");
            printf("Enter the last Guess Player 2: ");
            scanf("%d", &g3);
            if (p1 == g3)
            {
                printf("Right, Player-2 Wins!");
            }
            else
            {
                printf("Wrong, No (0) chances Left!");
                printf("Player-1 Wins!");
            }
        }

    }
    return 0;
}
