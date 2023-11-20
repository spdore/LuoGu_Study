#include <stdio.h>
#include <math.h>
const double PI = 3.141593; 
int main()
{
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("I love Luogu!\n");
    }
    else if (choice == 2)
    {
        printf("6 4\n");
    }
    else if (choice == 3)
    {
        printf("3\n12\n2\n");
    }
    else if (choice == 4)
    {
        double result = 500.0 / 3;
        printf("%.3lf", result);
    }
    else if (choice == 5)
    {
        printf("15");
    }
    else if (choice == 6)
    {
        printf("%.4f",sqrt(6 * 6 + 9 * 9));
    }
    else if (choice == 7)
    {
        printf("110\n90\n0\n");
    }
    else if (choice == 8)
    {
        printf("%.4f\n%.4f\n%.3f\n", PI * 10, PI * 25, PI * 125 * 4 / 3);
    }
    else if (choice == 9)
    {
        printf("22");
    }
    else if (choice == 10)
    {
        printf("9");
    }
    else if (choice == 11)
    {
        printf("%.4f", 100 / 3.0);
    }
    else if (choice == 12)
    {
        printf("13\nR\n");
    }
    else if (choice == 13)
    {
        printf("%.0f", cbrt(4 * 64 * PI / 3 + 4 * 1000 * PI / 3));
    }
    else if (choice == 14)
    {
        printf("50");
    }
    return 0;
}