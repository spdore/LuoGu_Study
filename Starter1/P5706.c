#include <stdio.h>
int main()
{
    float amount;
    int num_people;
    scanf("%f %d", &amount, &num_people);
    printf("%.3f\n%d", (amount / num_people), (num_people * 2));
    return 0;
}