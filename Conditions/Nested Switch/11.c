#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    switch (a>=90 && a <=100)
    {
    case 1:
        printf("Grade: A");
        break;
    
    case 0:
        switch (a >= 86 && a <=89)
        {
        case 1:
            printf("Grade: A-");
            break;
        
        case 0:
            switch (a >=82 && a <=85)
            {
            case 1:
                printf("Grade: B+");
                break;
            
            case 0:
                switch (a >=78 && a <=81)
                {
                case 1:
                    printf("Grade: B");
                    break;
                
                case 0:
                    switch (a >=74 && a <=77)
                    {
                    case 1:
                        printf("Grade: B-");
                        break;
                    
                    case 0:
                        switch (a >= 70 && a <=73)
                        {
                        case 1:
                            printf("Grade: C+");
                            break;
                        
                        case 0:
                            switch (a >=66 && a <=69)
                            {
                            case 1:
                                printf("Grade: C");
                                break;
                            
                            case 0:
                                switch (a >=62 && a <=65)
                                {
                                case 1:
                                    printf("Grade: C-");
                                    break;
                                
                                case 0:
                                    switch (a >=58 && a <=61)
                                    {
                                    case 1:
                                        printf("Grade: D+");
                                        break;
                                    
                                    case 0:
                                        switch (a >=55 && a <=57)
                                        {
                                        case 1:
                                            printf("Grade: D");
                                            break;
                                        
                                        case 0:
                                            switch (a>=0 && a<=54)
                                            {
                                            case 1:
                                                printf("Grade: F");
                                                break;
                                            case 0:
                                                printf("Invalid Input");
                                            }
                                            break;
                                        }
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
