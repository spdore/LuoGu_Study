#include <stdio.h>
// 辗转相除法求最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 确定最大值作为斜边 c
    if (a > b && a > c) {
        int temp = c;
        c = a;
        a = temp;
    } else if (b > a && b > c) {
        int temp = c;
        c = b;
        b = temp;
    }
    // 判断直角和两个锐角的关系
    if (c * c == a * a + b * b) {
        // 计算较小锐角的正弦值
        int numerator = (a < b) ? a : b;
        int denominator = c;
        // 约分
        int greatest_common_divisor = gcd(numerator, denominator);
        numerator /= greatest_common_divisor;
        denominator /= greatest_common_divisor;
        printf("%d/%d\n", numerator, denominator);
    } 
    return 0;
}
