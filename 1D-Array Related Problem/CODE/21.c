#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter Your Array 1 Size: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter Your Array 1 Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter Your Array 2 Size: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter Your Array 2 Elements: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //Set Operation A-B
    int n1=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            if (arr1[i]==arr2[j])
            {
                for(int k = i;k<n;k++)
                {arr1[k]=arr1[k+1];}

                n1--;
                i--;
               break;
            }
            
        }
    }
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}
