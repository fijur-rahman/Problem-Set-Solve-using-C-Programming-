#include <stdio.h>

int main()
{
    int n;
    printf("Enter your Array Size: ");
    scanf("%d", &n);
    int arr[n];
    //Input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Serching
    printf("Want to found Number: ");
    int f, flag =0, index = -1;
    scanf("%d", &f);
    for (int i = 0; i < n; i++)
    {
        if (f==arr[i])
        {
            if(flag == 0){
                printf("Found at index position: ");
                flag = 1;
            }
            index = i;
            printf("%d, ", i);
            //printf("Found\n");
        }
    }
    if(index == -1) printf(" not found..");

  /*  for (int i = 0; i < n; i++)
    {
        if (f==arr[i])
        {
            ff=f;
            //printf("Found\n");
        }
        else
        {
            fn=f;
            //printf("Not Found\n");
        }
    }
    if (ff==f)
    {
        printf("Found at index position: ");
        for (int i = 0; i < n; i++)
        {
            if (f==arr[i])
            {
                printf(", ");
            }
            
            printf("%d", i);
        }
        
    }
    else
    {
        printf("Not Found\n");
    }*/
    return 0;
}
