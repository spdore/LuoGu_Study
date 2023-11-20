#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b)
    {
        if (b > c)
        {
            printf("%d %d %d", c, b, a);
        }
        if (c > a)
        {
            printf("%d %d %d", b, a, c);
        }
        if (c <= a && c >= b)
        {
            printf("%d %d %d", b, c, a);
        }
    }
    else if(b >= a)
    {
        if (a > c)
        {
            printf("%d %d %d", c, a, b);
        }
        if (c > b)
        {
            printf("%d %d %d", a, b, c);
        }
        if (c <= b && c >= a)
        {
            printf("%d %d %d", a, c, b);
        }
    }
    return 0;
}