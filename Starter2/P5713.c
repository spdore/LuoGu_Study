#include <stdio.h>
int main()
{
    int local, luogu, num;
    scanf("%d", &num);
    local = 5 * num;
    luogu = 3 * num + 11;
    if (local <= luogu)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }
    return 0;
}