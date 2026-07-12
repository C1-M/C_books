#define _CRT_SECURE_NO_WARNINGS

//8.计算最大值和最小值的差值
// 输入10个整数，写代码找出其中最大值和最小值，
// 计算最大值和最小值的差，并打印出差值结果


#include <stdio.h>

int main() {
    int arr[10];  // 定义大小为10的数组
    int i, max, min;

    // 输入10个整数
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 初始化最大值和最小值为第一个元素
    max = arr[0];
    min = arr[0];

    // 遍历数组查找最大值和最小值
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];  // 更新最大值
        }
        if (arr[i] < min) {
            min = arr[i];  // 更新最小值
        }
    }

    printf("%d\n", max - min);

    return 0;
}
