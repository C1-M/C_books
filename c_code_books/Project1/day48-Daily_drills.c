#define _CRT_SECURE_NO_WARNINGS
//合并有序数组
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//输入包含三行，第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个
//数，m表示第三行第二个升序序列中数字的个数。其中1 <= n <= 30, 1 <= m <= 30
//第二行包含 n 个整数，用空格分隔。
//第三行包含 m 个整数，用空格分隔。
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重
//新进行升序序列排列合并。
/*
测试：

输入：
5 6
1 3 7 9 22
2 8 10 17 33 44

输出：
1 2 3 7 8 9 10 17 22 33 44
*/


//方法一：
//#include <stdio.h>
//
//int main() {
//    int n = 5, m = 6;
//    //scanf("%d %d", &n, &m);
//
//    int arr1[30] = { 1,3,7,9,22 }, arr2[30] = { 2,8,10,17,33,44 }, arr3[60]; // arr3大小 = n + m
//
//    //// 读取第一个有序序列
//    //for (int i = 0; i < n; i++) {
//    //    scanf("%d", &arr1[i]);
//    //}
//
//    //// 读取第二个有序序列
//    //for (int i = 0; i < m; i++) {
//    //    scanf("%d", &arr2[i]);
//    //}
//
//    // === 步骤1：将两个数组合并到arr3 ===
//    int total = n + m;
//    // 先复制arr1的所有元素
//    for (int i = 0; i < n; i++) {
//        arr3[i] = arr1[i];
//    }
//    // 再复制arr2的所有元素（注意起始索引是n）
//    for (int i = 0; i < m; i++) {
//        arr3[n + i] = arr2[i];
//    }
//
//    // === 步骤2：对arr3进行冒泡排序 ===
//    for (int i = 0; i < total - 1; i++) {       // 外层循环：排序轮数
//        for (int j = 0; j < total - 1 - i; j++) { // 内层循环：相邻元素比较
//            if (arr3[j] > arr3[j + 1]) {
//                // 交换相邻元素
//                int temp = arr3[j];
//                arr3[j] = arr3[j + 1];
//                arr3[j + 1] = temp;
//            }
//        }
//    }
//
//    // === 步骤3：按格式输出结果 ===
//    for (int i = 0; i < total; i++) {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}


//方法二：
//#include <stdio.h>
//int main() {
//    int n = 5, m = 6;
//    //scanf("%d %d", &n, &m);
//
//    int arr1[30]={ 1,3,7,9,22 }, arr2[30]={ 2,8,10,17,33,44 }, arr3[60]; // 合并后数组大小 = n + m
//
//    //// 读取第一个有序序列
//    //for (int i = 0; i < n; i++) {
//    //    scanf("%d", &arr1[i]);
//    //}
//
//    //// 读取第二个有序序列
//    //for (int i = 0; i < m; i++) {
//    //    scanf("%d", &arr2[i]);
//    //}
//
//    // 双指针合并（核心修正）
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m) {
//        if (arr1[i] <= arr2[j]) {
//            arr3[k++] = arr1[i++]; // 取arr1的较小值
//        }
//        else {
//            arr3[k++] = arr2[j++]; // 取arr2的较小值
//        }
//    }
//
//    // 处理剩余元素
//    while (i < n) arr3[k++] = arr1[i++];
//    while (j < m) arr3[k++] = arr2[j++];
//
//    // 正确输出结果（注意空格格式）
//    for (int idx = 0; idx < n + m; idx++) {
//        printf("%d", arr3[idx]);
//        if (idx < n + m - 1) printf(" "); // 最后一个元素后不加空格
//    }
//
//    return 0;
//}


#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[30], b[30], c[60];  // 结果数组大小 = n + m

    // 读取两个有序序列
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    // 双指针合并核心逻辑（仅10行核心代码）
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];

    // 格式化输出（末尾无空格）
    for (int i = 0; i < k; i++)
        printf("%s%d", i ? " " : "", c[i]);

    return 0;
}
