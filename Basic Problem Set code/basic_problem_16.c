#include <stdio.h>

int main()
{
    int u, a, t, s;
    scanf("%d %d %d", &u, &a, &t);
    s=u*t+(0.5*a*t*t);
    printf("s = %d\n", s);
    return 0;
}
