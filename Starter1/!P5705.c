#include <stdio.h>
int main()
{
    char hun, ten, one, dec;
    scanf("%c%c%c.%c", &hun, &ten, &one, &dec);
    printf("%c.%c%c%c", dec, one, ten, hun);
    return 0;
}