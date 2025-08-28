#include <stdio.h>

int main()
{
    int n, pos;
    printf("Enter Your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Your Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Output your Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    //Delete Eelement 
    printf("\nWhich position you want to delete: ");
    scanf("%d", &pos);
    for (int i = pos; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Output After deleting element: ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
