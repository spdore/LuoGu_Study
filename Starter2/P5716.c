#include <stdio.h>
int main() {
    int year, month, days;
    scanf("%d %d", &year, &month);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        if (month == 2) 
        {
            days = 29;
        } 
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            days = 30;
        } 
        else 
        {
            days = 31;
        }
    } else {
        if (month == 2) 
        {
            days = 28;
        } 
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            days = 30;
        } 
        else 
        {
            days = 31;
        }
    }
    printf("%d", days);
    return 0;
}
