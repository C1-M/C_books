#define _CRT_SECURE_NO_WARNINGS
//求两个整数的平均值
//输入2个整数m和n，写一个函数average，求2个整数的平均值，考虑整数过大溢出的问题。
#include <stdio.h>

//int average(int m, int n) {
//    // 使用long long类型存储和，避免32位整数相加溢出
//    long long sum = (long long)m + n;
//    return (int)(sum / 2);
//}
int average(int m, int n) {
    return (int)((long long)m + n) / 2;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", average(m, n));
    return 0;
}

