#include <stdio.h>

int main()
{
    int amount, notes_1, notes_5, notes_10, notes_50, notes_100, notes_500;
    scanf("%d", &amount);
    notes_500 = amount / 500;
    amount %= 500;
    notes_100 = amount / 100;
    amount %= 100;
    notes_50 = amount / 50;
    amount %= 50;
    notes_10 = amount / 10;
    amount %= 10;
    notes_5 = amount / 5;
    amount %= 5;
    notes_1 = amount;
    printf("500 notes: %d\n", notes_500);
    printf("100 notes: %d\n", notes_100);
    printf("50 notes: %d\n", notes_50);
    printf("10 notes: %d\n", notes_10);
    printf("5 notes: %d\n", notes_5);
    printf("1 notes: %d\n", notes_1);
    return 0;
}
