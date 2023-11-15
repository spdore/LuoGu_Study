#include <stdio.h>
int main()
{
    int a, b, c, d, hour, min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ( d >= b )
    {
        min = d - b;
        hour = c - a;
    }
    else
    {
        min = d + 60 - b;
        hour = c - a - 1;
    }
    printf("%d %d", hour, min);
    return 0;
}