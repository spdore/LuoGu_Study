#include <stdio.h>
int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    int total_distance = 0;
    int days_in_week = 7;
    int swim_distance_per_day = 250;
    for (int i = 0; i < n; ++i)  // 天数循环
    {
        int current_day = (x + i) % days_in_week;  // 判断是星期几
        if (current_day != 0 && current_day != 6)  // 判断是否是周末 
        { 
            total_distance += swim_distance_per_day;
        }
    }
    printf("%d\n", total_distance);
    return 0;
}
