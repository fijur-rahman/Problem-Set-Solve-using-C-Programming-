#include <stdio.h>

int main()
{
    int n, count=0;
    printf("Enter Your Array Size: ");
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i <n; i++)
    {
        getchar();
        scanf("%c", &arr[i]);
        if (arr[i]=='A'|| arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            count++;
        }
    }
    printf("Count Vowel: %d", count);
    return 0;
}
