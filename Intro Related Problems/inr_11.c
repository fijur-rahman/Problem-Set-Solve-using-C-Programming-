#include <stdio.h>

int main()
{
    unsigned int uiv = 4294967295;
    unsigned long int uliv= 4294967295;
    unsigned long long int ulliv = 1844674403709551615;
    unsigned short int usiv = 65535;
    printf("The Unsigned int value: %u\n", uiv);
    printf("The unsgined long int value: %lu\n", uliv);
    printf("The unsigned long long int value: %llu\n", ulliv);
    printf("The unsigned short int value: %hu\n", usiv);
    return 0;
}
