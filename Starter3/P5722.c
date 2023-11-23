#include <stdio.h>
int main()
{
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        res += i;
    }
    printf("%d", res);
    return 0;
}