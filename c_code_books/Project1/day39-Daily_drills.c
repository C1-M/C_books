#define _CRT_SECURE_NO_WARNINGS

//打印菱形
// 
//输入一个整数n，打印对应2*n-1行的菱形图案，比如，输入7，输出如下图案，图案总共13行
/*
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/

//方法一：
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//
//    int i = 0;
//    while (i < 2 * n - 1) {  // 循环 2*n-1 次（总行数）
//        int spaces, stars;
//
//        // 判断当前行属于上半部分还是下半部分
//        if (i < n) {
//            // 上半部分（含中心行）：行号 0 ~ n-1
//            spaces = n - 1 - i;  // 空格数 = n-1 - 当前行索引
//            stars = 2 * i + 1;   // 星号数 = 2*i + 1
//        }
//        else {
//            // 下半部分：行号 n ~ 2*n-2
//            int mirror_row = 2 * n - 2 - i;  // 映射到上半部分的对称行
//            spaces = n - 1 - mirror_row;
//            stars = 2 * mirror_row + 1;
//        }
//
//        // 打印空格
//        for (int j = 0; j < spaces; j++) {
//            printf(" ");
//        }
//        // 打印星号
//        for (int j = 0; j < stars; j++) {
//            printf("*");
//        }
//        printf("\n");  // 换行
//
//        i++;  // 递增行计数器
//    }
//
//    return 0;
//}


//方法二：
//#include <stdio.h>
//int main() {
//    int n, i = 0;
//    scanf("%d", &n);
//    while (i < 2 * n - 1) {
//        int d = i < n ? n - 1 - i : i - n + 1, s = 2 * n - 1 - 2 * d;
//        while (d--) putchar(' ');
//        while (s--) putchar('*');
//        putchar('\n');
//        i++;
//    }
//}

//#include <stdio.h>
//int main() {
//    int n, i = 0;          // 1. 声明变量：n(输入大小), i(行计数器，从0开始)
//    scanf("%d", &n);       // 2. 读取用户输入的整数n
//
//    while (i < 2 * n - 1) {  // 3. 循环2n-1次（总行数控制）
//        // 核心计算：单行确定空格数d和星号数s
//        int d = i < n ? n - 1 - i : i - n + 1,  // 4. 空格数d
//            s = 2 * n - 1 - 2 * d;              // 5. 星号数s
//
//        while (d--) putchar(' ');  // 6. 打印d个空格
//        while (s--) putchar('*');  // 7. 打印s个星号
//        putchar('\n');             // 8. 换行
//        i++;                       // 9. 移动到下一行
//    }
//}






//13. 喝多少瓶汽水
// 
//水已知1瓶汽水1元，2个空瓶可以换一瓶汽水，输入整数n（n >= 0），表示n元钱，
//计算可以多少汽水，请编程实现。
//#include <stdio.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", n > 0 ? 2 * n - 1 : 0);
//}
