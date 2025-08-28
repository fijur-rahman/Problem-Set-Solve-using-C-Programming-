#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter your Array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("Sum of Even Index Num: %d", sum);
    return 0;
}
