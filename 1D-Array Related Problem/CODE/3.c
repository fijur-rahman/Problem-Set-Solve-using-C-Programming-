#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    //input
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 ==0 )
        {
            sum+=arr[i];
        }
        
    }
    //output
    printf("Even Number Sum: %d", sum);
    return 0;
}
