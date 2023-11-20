#include <stdio.h>
int main()
{
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);
    if (s <= m * t)
    {
        if (s % t == 0)
        {
            printf("%d", m - s / t);
        }
        else
        {
            printf("%d", m - s / t - 1);
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}