#include <stdio.h>
int main()
{
    int amount;
    float cost;
    scanf("%d", &amount);
    if (amount <= 150)
    {
        cost = 0.4463 * amount;
    }
    else if (150 < amount && amount <= 400)
    {
        cost = 0.4463 * 150 + (amount - 150) * 0.4663;
    }
    else if (400 < amount)
    {
        cost = 0.4463 * 150 + (400 - 150) * 0.4663 + (amount - 400) * 0.5663;
    }
    printf("%.1f", cost);
    return 0;
}