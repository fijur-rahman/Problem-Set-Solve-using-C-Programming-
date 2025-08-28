#include <stdio.h>

int main()
{
    int X, n1, n2, n3;

    printf("Enter Player-1's number and Player-2's three guesses: \n");
    scanf("%d %d", &X, &n1);

    switch (n1 == X)
    {
    case 1:
        printf("Right, Player-2 wins!\n");
        break;
    case 0:
        printf("Wrong, 2 Chance(s) Left!\n");
        scanf("%d", &n2);
        switch (n2 == X)
        {
        case 1:
            printf("Right, Player-2 wins!\n");
            break;
        case 0:
            printf("Wrong, 1 Chance(s) Left!\n");
            scanf("%d", &n3);
            switch (n3 == X)
            {
            case 1:
                printf("Right, Player-2 wins!\n");
                break;
            case 0:
                printf("Player-1 wins!\n");
                break;
            }
            break;
        }
        break;
    }

    return 0;
}