#include <stdio.h>

int main()
{
    int s, hour, minute, second;
    scanf("%d", &s);
    hour = s/3600;
    minute = (s%3600)/60;
    second = s%60;
    printf("%d hour %d minute %d second", hour,minute,second);
    return 0;
}
