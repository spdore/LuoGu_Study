#include <stdio.h>
int main()
{
    int a, day = 0, rest;
    scanf("%d", &a);
    for (rest = a; rest >= 1; )
    {
        rest /= 2;
        day += 1;
    }
    printf("%d", day);
    return 0;
}