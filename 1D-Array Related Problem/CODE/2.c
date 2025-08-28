#include <stdio.h>

int main()
{
    int n, sum=0; 
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    //input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    //Output
    printf("%d", sum);
    return 0;
}
