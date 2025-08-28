#include <stdio.h>

int main()
{
    int n, max, min, max_id, min_id;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    //array input
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[1];
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            max_id=i;
        }
        if (min < arr[i])
        {
            
        }
        else
        {
            min=arr[i];
            min_id=i;
        }
        
    }
    printf("Max: %d ; Max Index: %d\n", max, max_id);
    printf("Min: %d ; Min Index: %d\n", min, min_id);
    return 0;
}
