#define _CRT_SECURE_NO_WARNINGS
//自幂数
//写一个代码打印1~100000之间的所有的自幂数，中间用空格分隔
/*
自幂数（Narcissistic number）是指一个n位数，其各位数字的n次幂之和等于它本身。
例如：
153（3位数）：
1^3+5^3+3^3=153
1634（4位数）：
1^4+6^4+3^4+4^4=1634
*/

//#include <stdio.h>
//
//// 计算 base 的 exp 次幂（整数版本）
//int power(int base, int exp) {
//    int result = 1;
//    for (int i = 0; i < exp; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//int main() {
//    for (int num = 1; num <= 100000; num++) {
//        int temp = num;
//        int n = 0;  // 位数计数器
//
//        // 计算当前数字的位数
//        while (temp != 0) {
//            n++;
//            temp /= 10;
//        }
//
//        // 重新初始化temp并计算各位n次幂之和
//        temp = num;
//        int sum = 0;
//        while (temp != 0) {
//            int digit = temp % 10;
//            sum += power(digit, n);
//            temp /= 10;
//        }
//
//        // 检查是否为自幂数
//        if (sum == num) {
//            printf("%d ", num);
//        }
//    }
//    return 0;
//}