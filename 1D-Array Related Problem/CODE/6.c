#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("First Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Second Array: ");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }
    printf("OutPUT: \n");
    for (int k = 0; k < n; k++)
    {
        sum=arr1[k]+arr2[k];
        printf("%d ", sum);
    }
    
    return 0;
}
