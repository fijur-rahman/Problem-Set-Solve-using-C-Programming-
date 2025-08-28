#include <stdio.h>

int main()
{
    int n; 
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Array 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = n-1; i >=0; i--)
    {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}
