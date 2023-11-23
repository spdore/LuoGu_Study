#include <stdio.h>
int main()
{
    int n, k, res_a = 0, res_b = 0, count_a = 0, count_b = 0, i;
    scanf("%d %d", &n, &k);
    for (i = 1; i < n + 1; i++)
    {
        if (i % k == 0)
        {
            res_a += i;
            count_a += 1;
        }
        else
        {
            res_b += i;
            count_b += 1;
        }
    }
    float avg_a, avg_b;
    avg_a = (float)res_a / count_a;
    avg_b = (float)res_b / count_b;
    printf("%.1f %.1f", avg_a, avg_b);
    return 0;
}