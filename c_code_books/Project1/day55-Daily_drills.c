#define _CRT_SECURE_NO_WARNINGS

////冒泡排序
//#include <stdio.h>
//
//// 函数声明：bubble_sort 函数接收一个整型数组和一个整型长度
//void bubble_sort(int arr[], int n);
//
//int main() {
//    int numbers[] = { 3, 5, 9, 7, 2, 1 };// 定义一个待排序的整型数组
//    int length = sizeof(numbers) / sizeof(numbers[0]);// 计算数组的长度 (元素个数)
//
//    printf("排序前: ");
//    for (int i = 0; i < length; i++) {
//        printf("%d ", numbers[i]);
//    }
//    printf("\n");
//
//    bubble_sort(numbers, length);// 调用冒泡排序函数，对数组进行排序
//
//    printf("排序后: ");
//    for (int i = 0; i < length; i++) {
//        printf("%d ", numbers[i]);
//    }
//    printf("\n");
//    return 0;
//}
//
///**
// * 冒泡排序函数 (这里写的是升序)
// * arr：待排序的整型数组
// * n：数组的长度
// */
//void bubble_sort(int arr[], int n) {
//    // 外层循环：控制“冒泡”的轮数，共 n-1 轮
//    for (int i = 0; i < n - 1; i++) {
//
//        // 优化：检查本轮是否有交换发生
//        //int swapped = 0;
//
//        // 内层循环：从 0 到 n-i-2，进行相邻元素的比较和交换
//        for (int j = 0; j < n - i - 1; j++) {
//
//            // 如果前一个元素大于后一个元素
//            if (arr[j] > arr[j + 1]) {
//                // 下面的行代码是交换两个元素的值 (使用临时变量交换的)
//                int temp = arr[j];     // 1. 把 arr[j] 的值存入临时变量 temp
//                arr[j] = arr[j + 1];   // 2. 把 arr[j+1] 的值赋给 arr[j]
//                arr[j + 1] = temp;     // 3. 把 temp 的值 (原 arr[j] 的值) 赋给 arr[j+1]
//                //交换结束
//
//                //swapped = 1; // 标记发生了交换
//            }
//        }
//
//        // 优化：如果本轮没有发生任何交换，说明数组已有序，提前结束排序
//        //if (swapped == 0) {
//        //    break;
//        //}
//    }
//}


//#include<stdio.h>
//void sort(int* a, int n) { 
//	for (int i = 0; i < n - 1; i++)
//		for (int j = 0; j < n - i - 1; j++)
//			if (a[j] > a[j + 1]) { 
//				int t = a[j]; 
//				a[j] = a[j + 1]; 
//				a[j + 1] = t; 
//			} 
//}
//int main() { 
//	int a[] = { 5,1,4,2,8 }; 
//	sort(a, 5); 
//	for (int i = 0; i < 5; i++)
//		printf("%d ", a[i]); 
//}