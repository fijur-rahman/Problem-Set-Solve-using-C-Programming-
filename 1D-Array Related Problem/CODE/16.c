#include <stdio.h>

int main()
{
    int n;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i%2!=0)
        {
            arr[i]=0;
        }
    }
    //Output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
