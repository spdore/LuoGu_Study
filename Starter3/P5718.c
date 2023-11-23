#include <stdio.h>
int main()
{
    int a[100], n, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    res = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < res)
        {
            res = a[i + 1];
        }
    }
    printf("%d", res);
    return 0;
}