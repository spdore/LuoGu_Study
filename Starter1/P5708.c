#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float sqare;
    sqare = sqrt(0.5 * (a + b + c) * (0.5 * b + 0.5 * c - 0.5 * a) * (0.5 * a + 0.5 * c - 0.5 * b) * (0.5 * a + 0.5 * b - 0.5 * c));
    printf("%.1f", sqare);
    return 0;
}