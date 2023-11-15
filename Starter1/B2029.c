#include <stdio.h>
int main()
{
    int h, r, times;
    scanf("%d %d", &h, &r);
    float contain = 3.14 * r * r * h;
    times = (20000 / contain) + 1;
    printf("%d", times);
    return 0;
}