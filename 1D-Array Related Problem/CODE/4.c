#include <stdio.h>

int main()
{
    int n;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    float avg, arr[n], sum=0.0;
    //input
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("%.2f", avg);
    return 0;
}
