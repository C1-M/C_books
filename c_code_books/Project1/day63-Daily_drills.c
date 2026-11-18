#define _CRT_SECURE_NO_WARNINGS

//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.

//int bin_search(int arr[], int left, int right, int key)
// arr 是查找的数组
//left 数组的 左下标
//right 数组的 右下标
//key 要查找的数字

//#include <stdio.h>
//
//// 二分查找函数
//// 找到返回下标，找不到返回 -1
//int binarySearch(int arr[], int left, int right, int target) {
//    while (left <= right)
//{
//        // 求中间位置
//        //int mid = (left + right) / 2;
//        int mid = left + (right - left) / 2;   // 可以写成这样，防止溢出
//
//        if (arr[mid] == target)
//        {
//            return mid;  // 找到，返回下标
//        }
//        else if (arr[mid] < target)
//        {
//            left = mid + 1; // 去右半边找
//        }
//        else
//        {
//            right = mid - 1; // 去左半边找
//        }
//    }
//    return -1; // 循环结束没找到
//}
//
//int main(void)
//{
//    // 一定是有序数组！
//    int arr[] = { 1,3,5,7,9,11,13,15 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int num = 7;
//
//    int index = binarySearch(arr, 0, len - 1, num);
//    if (index != -1)
//    {
//        printf("找到了，下标是：%d\n", index);
//    }
//    else
//    {
//        printf("不存在该数字\n");
//    }
//    return 0;
//}
