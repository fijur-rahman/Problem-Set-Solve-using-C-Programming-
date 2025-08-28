#include <stdio.h>

int main()
{
    long int l_i_v = 2147483647;
    long long int l_l_i_v = 9223372036854775807;
    long double l_d_v = 1.1E+4932;
    short int s_i_v = 32767;
    printf("The long int value: %ld\n", l_i_v);
    printf("The long long int value: %lld\n", l_l_i_v);
    printf("The long double value: %LE\n", l_d_v);
    printf("The short int value: %hd\n", s_i_v);
    return 0;
}
