#define _CRT_SECURE_NO_WARNINGS
//求数字的每一位之和
//输入一个整数 m，求这个整数 m 的每一位之和，并打印。
/*
测试1：
输入：1234
输出：10

测试2：
输入：366
输出：15
*/

//#include<stdio.h>
//int sum(int m) {
//	int j = 0;
//	while (m) {
//		int n = m % 10;
//		j += n;
//		m = m / 10;
//	}
//	return j;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d ", sum(n));
//	return 0;
//}


//优化：
//#include <stdio.h>
//int sumDigits(int n) {
//    int sum = 0;
//    if (n < 0)
//        n = -n;  // 处理负数
//    while (n) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", sumDigits(n));
//    return 0;
//}