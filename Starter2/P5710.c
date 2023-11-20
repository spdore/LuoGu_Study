#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int a = 0, b = 0;
    if (num % 2 == 0)
        a = 1;
    if (4 < num && num <= 12)
        b = 1;
    if (a == 1 && b == 1)
    {
        printf("1 1 0 0");
    }
    else if (a == 0 && b == 0)
    {
        printf("0 0 0 1");
    }
    else
    {
        printf("0 1 1 0");
    }
    return 0;
}