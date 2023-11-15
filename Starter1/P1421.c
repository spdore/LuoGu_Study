#include <stdio.h>
int main()
{
    int yuan, jiao, amount;
    scanf("%d %d", &yuan, &jiao);
    amount = (10 * yuan + jiao) / 19;
    printf("%d", amount);
}