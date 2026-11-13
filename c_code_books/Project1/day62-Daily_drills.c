#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//【一维数组】输入10个整数，求平均值
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }, num = 0;
//	//int arr[10], num = 0;
//
//	for (int i = 0; i < 10; i++) {
//		//scanf("%d", &arr[i]);
//		num += arr[i];
//	}
//
//	printf("%d", num / 10);
//
//	return 0;
//}


//【一维数组】交换数组,数组一样大
//int main() {
//	int arr1[4] = { 1,2,3,4 }, arr2[4] = { 5,6,7,8 };
//	for (int i = 0; i < 4; i++) {
//		int rem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = rem;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr1[i]);
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//最大值
//求 10 个整数中最大值
//int main() {
//	int arr[10] = { 1,5,3,6,9,22,56,6,33,4 };
//	int max = arr[0];
//
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	printf("%d", max);
//
//	return 0;
//}