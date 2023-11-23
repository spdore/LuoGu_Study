#include <stdio.h>
int main()
{
    int n, count = 1;
    scanf("%d", &n);
    for (int i = n; i >= 1 / 2; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (count <= 9 )
            {
                printf("0%d", count);
            }
            else 
            {
                printf("%d", count);
            }
            count++;
        }
        printf("\n");
    }
    return 0;
}