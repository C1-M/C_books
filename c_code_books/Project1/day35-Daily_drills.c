#define _CRT_SECURE_NO_WARNINGS
//7.分数求和
/*
计算 1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - … + 1 / 99 - 1 / 100 的值，
并打印出结果。（注：除法分为整数除法和浮点数除法，要计算出小数，得采用
浮点数除法，浮点数除法的操作数中至少要保证有一个浮点数。）
*/

//逻辑错误：
//#include<stdio.h>
//int main() {
//	int flat = 100;
//	int flatk = 100;
//	double j = 0, b = 0, a = 1, i = 1, c = 0, n = 0,e = 0;
//	while (flat) {
//		//double i = 1;
//		double j = 1 / (i += 2);
//		n += j;
//		if (99 == (i += 2)) {
//			flat = 0;
//		}
//	}
//
//	while (flatk) {
//		//double a = 1;
//		double b = 1 / (2 * a);
//		e += b;
//		a++;
//		if ( 100 == (i += 2)) {
//			flatk = 0;
//		}
//	}
//
//	c = (1 + n) - e;
//	printf("%0.2lf", c);
//	return 0;
//}


//修改后：
//#include <stdio.h>
//
//int main() {
//    int flat = 1;  // 用 1 表示 true（更规范）
//    int flatk = 1;
//    double n = 0.0, e = 0.0;
//    double i = 3;  // 从 3 开始（1/1 单独处理）
//    double a = 2;  // 从 2 开始
//
//    // 计算奇数项：1/3 + 1/5 + ... + 1/99
//    while (flat) {
//        n += 1.0 / i;      // 用当前 i 计算
//        if (i == 99) {     // 检查当前 i
//            flat = 0;
//        }
//        i += 2;            // 循环末尾更新 i（只 +2 一次）
//    }
//
//    // 计算偶数项：1/2 + 1/4 + ... + 1/100
//    while (flatk) {
//        e += 1.0 / a;     // 用当前 a 计算
//        if (a == 100) {    // 检查当前 a（不是 i！）
//            flatk = 0;
//        }
//        a += 2;           // 循环末尾更新 a
//    }
//
//    double c = (1.0 + n) - e;  // 1.0 补上 1/1
//    printf("%.2lf\n", c);      // 输出: 0.69
//    return 0;
//}

