#define _CRT_SECURE_NO_WARNINGS
//计算最大公约数
//输入2个整数m和n，计算m和n的最大公约数，并打印出结果。

//方法一：（最优）
//两个整数的最大公约数等于其中较小的数和两数相除余数的最大公约数
/*
示例：求 48 和 18 的最大公约数
m     n              r 
48 ÷ 18 = 2 ... 余 12
m=n   n=r           r 
18 ÷ 12 = 1 ... 余 6
m=n   n=r          r 
12 ÷ 6 = 2 ... 余 0

结果：最大公约数是 6
*/

//#include<stdio.h>
//int main() {
//	int m, n, r;
//
//	printf("请输入两个整数: ");
//	scanf("%d %d", &m, &n);
//
//	// 辗转相除法核心：循环直到余数为0
//	while (n != 0) {
//		r = m % n; // 计算余数
//		m = n;     // 用除数更新被除数
//		n = r;     // 用余数更新除数
//	}
//
//	printf("最大公约数是: %d\n", m); // 最终m即为GCD
//	return 0;
//}

//优化：
//#include <stdio.h>
//#include <stdlib.h> // 用于 abs()
//int gcd(int a, int b) {
//    // 处理数学未定义情况：0 和 0
//    if (a == 0 && b == 0) {
//        return -1; // 用 -1 表示错误（实际应用中可用 errno 或布尔返回值）
//    }
//
//    // 处理其他含 0 的情况：gcd(a,0) = |a| (a≠0)
//    if (b == 0) {
//        return abs(a);
//    }
//
//    // 辗转相除法核心
//    while (b != 0) {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return abs(a); // 确保结果为正
//}
//int main() {
//    int x, y;
//    printf("输入两个整数: ");
//    scanf("%d %d", &x, &y);
//
//    int result = gcd(x, y);
//    if (result == -1) {
//        printf("错误：0 和 0 的最大公约数在数学上未定义！\n");
//    }
//    else {
//        printf("最大公约数: %d\n", result);
//    }
//    return 0;
//}



//方法二：
//用较大数减去较小数，再用差和较小数比较，继续相减，
//直到两数相等，这个数就是最大公约数。
/*
48 - 18 = 30
30 - 18 = 12
18 - 12 = 6
12 - 6 = 6

结果：最大公约数是 6
*/
//#include <stdio.h>
//#include <stdlib.h> // 用于abs()函数
//
//int main() {
//    int m, n;
//
//    printf("请输入两个正整数: ");
//    scanf("%d %d", &m, &n);
//
//    // 确保m和n为正数（更相减损术要求正整数）
//    m = abs(m);
//    n = abs(n);
//
//    // 核心逻辑：反复用大数减小数，直到两数相等
//    while (m != n) {
//        if (m > n) {
//            m = m - n;  // 大数减小数，结果存回大数位置
//            printf("%d - %d = %d\n", m, n, m - n);
//        }
//        else {
//            n = n - m;  // 大数减小数，结果存回大数位置
//            printf("%d - %d = %d\n", m, n, n - m);
//        }
//
//        // 调试用：打印每一步结果（实际使用时可删除）
//        //printf("m = %d n = %d\n", m, n);
//    }
//
//    printf("最大公约数是: %d\n", m); // 此时m == n
//    return 0;
//}

//优化：
//#include <stdio.h>
//#include <stdlib.h> // 用于abs()函数
//
//int main() {
//    int m, n;
//
//    printf("请输入两个整数: "); // 修改提示语，允许输入0
//    scanf("%d %d", &m, &n);
//
//    // 取绝对值处理（GCD与符号无关）
//    int original_m = m, original_n = n;
//    m = abs(m);
//    n = abs(n);
//
//    // ===== 新增：关键边界条件检查 =====
//    if (m == 0 && n == 0) {
//        printf("\n错误：0 和 0 的最大公约数在数学上未定义！\n");
//        printf("原因：所有正整数都能整除0，因此不存在'最大'公约数\n");
//        return 1; // 返回错误状态
//    }
//
//    // 处理含0的特殊情况（避免死循环）
//    if (m == 0) {
//        printf("\n%d 和 %d 的最大公约数是 %d\n", original_m, original_n, n);
//        printf("说明：根据数学定义，gcd(0, n) = |n|（当n≠0时）\n");
//        return 0;
//    }
//    if (n == 0) {
//        printf("\n%d 和 %d 的最大公约数是 %d\n", original_m, original_n, m);
//        printf("说明：根据数学定义，gcd(n, 0) = |n|（当n≠0时）\n");
//        return 0;
//    }
//    // ==============================
//
//    printf("\n计算过程:\n");
//    // 核心逻辑：反复用大数减小数，直到两数相等
//    while (m != n) {
//        if (m > n) {
//            printf("%d - %d = %d\n", m, n, m - n);
//            m = m - n;
//        }
//        else {
//            printf("%d - %d = %d\n", n, m, n - m);
//            n = n - m;
//        }
//    }
//
//    printf("\n最大公约数是: %d\n", m); // 此时m == n
//    return 0;
//}





//方法三：
//将两个数分别分解质因数，然后取出公共的质因数相乘
/*
示例：求 36 和 60 的最大公约数
36 = 2 × 2 × 3 × 3
60 = 2 × 2 × 3 × 5
公共部分：2 × 2 × 3

结果：最大公约数是 12。
*/
//#include <stdio.h>
//int main() {
//    int a, b;
//    printf("请输入两个正整数: ");
//    scanf("%d %d", &a, &b);
//
//    // 保存原始值用于输出
//    int original_a = a, original_b = b;
//
//    // 存储质因数分解结果
//    int factors_a[100], factors_b[100]; // 假设质因数不超过100个
//    int count_a = 0, count_b = 0;
//
//    // 分解第一个数的质因数
//    printf("\n%d 的质因数分解: ", original_a);
//    for (int i = 2; i <= a; i++) {
//        while (a % i == 0) {
//            factors_a[count_a++] = i;
//            a /= i;
//            printf("%d ", i);
//        }
//    }
//
//    // 分解第二个数的质因数
//    printf("\n%d 的质因数分解: ", original_b);
//    for (int i = 2; i <= b; i++) {
//        while (b % i == 0) {
//            factors_b[count_b++] = i;
//            b /= i;
//            printf("%d ", i);
//        }
//    }
//
//    // 提取公共质因数
//    printf("\n\n公共质因数: ");
//    int gcd = 1;
//    int index_a = 0, index_b = 0;
//
//    while (index_a < count_a && index_b < count_b) {
//        if (factors_a[index_a] == factors_b[index_b]) {
//            printf("%d ", factors_a[index_a]);
//            gcd *= factors_a[index_a];
//            index_a++;
//            index_b++;
//        }
//        else if (factors_a[index_a] < factors_b[index_b]) {
//            index_a++;
//        }
//        else {
//            index_b++;
//        }
//    }
//
//    printf("\n结果: 最大公约数是 %d\n", gcd);
//    return 0;
//}

//优化：
//#include <stdio.h>
//#include <stdlib.h> // 添加abs()函数支持
//
//int main() {
//    int a, b;
//    printf("请输入两个整数: "); // 修改提示语，允许输入0
//    scanf("%d %d", &a, &b);
//
//    // 保存原始值用于输出
//    int original_a = a, original_b = b;
//
//    // 取绝对值处理（GCD与符号无关）
//    a = abs(a);
//    b = abs(b);
//
//    // ===== 新增：关键边界条件检查 =====
//    if (a == 0 && b == 0) {
//        printf("\n错误：0 和 0 的最大公约数在数学上未定义！\n");
//        printf("原因：所有正整数都能整除0，因此不存在'最大'公约数\n");
//        return 1; // 返回错误状态
//    }
//    // ==============================
//
//    // 处理含0的特殊情况（数学定义：gcd(0,n)=|n| 当n≠0时）
//    if (a == 0) {
//        printf("\n%d 和 %d 的最大公约数是 %d\n", original_a, original_b, b);
//        printf("说明：根据数学定义，gcd(0, n) = |n|（当n≠0时）\n");
//        return 0;
//    }
//    if (b == 0) {
//        printf("\n%d 和 %d 的最大公约数是 %d\n", original_a, original_b, a);
//        printf("说明：根据数学定义，gcd(n, 0) = |n|（当n≠0时）\n");
//        return 0;
//    }
//
//    // 存储质因数分解结果
//    int factors_a[100], factors_b[100]; // 假设质因数不超过100个
//    int count_a = 0, count_b = 0;
//
//    // 分解第一个数的质因数
//    printf("\n%d 的质因数分解: ", original_a);
//    for (int i = 2; i <= a; i++) {
//        while (a % i == 0) {
//            factors_a[count_a++] = i;
//            a /= i;
//            printf("%d ", i);
//        }
//    }
//
//    // 分解第二个数的质因数
//    printf("\n%d 的质因数分解: ", original_b);
//    for (int i = 2; i <= b; i++) {
//        while (b % i == 0) {
//            factors_b[count_b++] = i;
//            b /= i;
//            printf("%d ", i);
//        }
//    }
//
//    // 提取公共质因数
//    printf("\n\n公共质因数: ");
//    int gcd = 1;
//    int index_a = 0, index_b = 0;
//
//    while (index_a < count_a && index_b < count_b) {
//        if (factors_a[index_a] == factors_b[index_b]) {
//            printf("%d ", factors_a[index_a]);
//            gcd *= factors_a[index_a];
//            index_a++;
//            index_b++;
//        }
//        else if (factors_a[index_a] < factors_b[index_b]) {
//            index_a++;
//        }
//        else {
//            index_b++;
//        }
//    }
//
//    printf("\n结果: 最大公约数是 %d\n", gcd);
//    return 0;
//}




//打印最小公倍数
////输入2个整数m和n，计算m和n的最小公倍数，并打印出结果
//#include <stdio.h>
//#include <stdlib.h> // 用于abs()函数
//
//// 辅助函数：计算最大公约数（使用欧几里得算法，比减损术更高效）
//int gcd(int a, int b) {
//    a = abs(a);
//    b = abs(b);
//
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int main() {
//    int m, n;
//
//    printf("请输入两个整数: ");
//    scanf("%d %d", &m, &n);
//
//    // ===== 关键边界条件检查 =====
//    if (m == 0 && n == 0) {
//        printf("\n错误：0 和 0 的最小公倍数在数学上未定义！\n");
//        printf("原因：所有整数都是0的倍数，不存在'最小'正整数公倍数\n");
//        return 1;
//    }
//
//    // 处理含0的特殊情况
//    if (m == 0 || n == 0) {
//        printf("\n%d 和 %d 的最小公倍数是 0\n", m, n);
//        printf("说明：根据数学定义，LCM(0, n) = 0（当n≠0时）\n");
//        return 0;
//    }
//    // ==========================
//
//    // 计算GCD和LCM
//    int g = gcd(m, n);
//
//    // 避免整数溢出：先除后乘 (|m|/g * |n|)
//    long long lcm = (long long)abs(m) / g * abs(n);
//
//    // 打印详细过程
//    printf("\n计算过程:\n");
//    printf("1. 最大公约数 GCD(%d, %d) = %d\n", m, n, g);
//    printf("2. 应用公式 LCM = |m × n| / GCD\n");
//    printf("   = |%d × %d| / %d\n", m, n, g);
//    printf("   = %lld / %d\n", (long long)abs(m) * abs(n), g);
//    printf("   = %lld\n", lcm);
//
//    printf("\n%d 和 %d 的最小公倍数是: %lld\n", m, n, lcm);
//    return 0;
//}