#include <stdio.h>

int main()
{
    int n;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n1=n;
    for (int i = 0; i < n1; i++)
    {
        for (int j = i+1; j < n1; )
        {
            if (arr[i]==arr[j])
            {
                for (int k = j; k < n1-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n1--;
            }
            else
            {
                j++;
            }
        }
        
    }
    //Output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
