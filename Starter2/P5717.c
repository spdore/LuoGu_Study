#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
        {
            printf("Right triangle\n");
            if (a == b || a == c || c == b)
            {
                printf("Isosceles triangle\n");
            }
        }
        else if (a * a + b * b <= c * c || b * b + c * c <= a * a || a * a + c * c <= b * b)
        {
            printf("Obtuse triangle\n");
            if (a == b || a == c || c == b)
            {
                printf("Isosceles triangle\n");
            }
        }
        else if (a * a + b * b >= c * c || b * b + c * c >= a * a || a * a + c * c >= b * b)
        {
            printf("Acute triangle\n");
            if (a == b || a == c || c == b)
            {
                printf("Isosceles triangle\n");
                if (a == b && b == c)
                {
                    printf("Equilateral triangle\n");
                }
            }
        }
    } 
    else
    {
        printf("Not triangle");
    }
    return 0;
}