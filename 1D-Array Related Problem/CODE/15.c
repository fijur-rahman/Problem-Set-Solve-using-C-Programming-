#include <stdio.h>

int main()
{
    int n; 
    printf("Enter Your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your Array: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]%3==0)
        {
            arr[i]=-1;
        }
    }
    //Output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
