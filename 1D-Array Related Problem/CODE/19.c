#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter Your Array 1 Size: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter your Array 1 Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter Your Array 2 Size: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter your Array 2 Elements: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //Set Operation Common
    int a=1, b=1;
    for (int i = 0; i < n || i < m; i++)
    {
        for (int j = 0; j < n || j < m ; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                b=0;
            }
            else
            {
                a=0;
            }
        }
    }
    if (a==0 && b==1)
    {
        printf("Empty Set");
    }
    
    return 0;
}
