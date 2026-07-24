#define _CRT_SECURE_NO_WARNINGS
//字符串拷贝
//写一个函数my_strcpy，实现拷贝字符串的功能，假设给定一个字符数组a，再给定一个字符数组
//b，将字符串a中的内容拷贝到字符串b中，拷贝内容包含字符串末尾的\0 字符。

//#include<stdio.h>
////void my_strcpy(char* b,const char* a) {
////	while (*a != '\0') {
////		*b = *a;
////		b++;
////		a++;
////	}
////	*b = '\0';
////}
//void my_strcpy(char* b, const char* a) {
//	// 先赋值再判断，一次性拷贝包含 \0
//	while (*b++ = *a++);
//	*b = '\0';
//}
//
//int main() {
//	char a[] = "hello cm";
//	char b[20] = { 0 };
//
//	my_strcpy(b, a);
//	printf("%s\n", b);
//
//	return 0;
//}





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

#include<stdio.h>
int main() {
	int n = 5, m = 6;
	//scanf("%d %d\n", &n, &m);

	int arr1[30] = { 1,3,7,9,22 };
	int arr2[30] = { 2,8,10,17,33,44 };
	int arr3[30] = { 0 };

	//for (int i = 0; i < n; i++) {
	//	scanf("%d\n", &arr1);
	//}
	//for (int i = 0; i < m; i++) {
	//	scanf("%d\n", &arr2);
	//}
	for (int i = 0; i < (m * n); i++) {
		if (i <= n) {
			arr3[i] = arr1[i];
		}
		else {
			arr3[i] = arr2[i];
		}
		//if (i < (m * n) - m) {
		//	arr3[i] = arr2[i];
		//}
	}

	//for (int i = 0; i < (m * n); i++) {
	//	for (int j = 0; j < (m * n) - 1; j++) {
	//		if (arr3[i] > arr3[(m * n) + 1]) {
	//			arr3[i]=arr3
	//		}
	//	}
	//		
	//}
	int total = n + m;
	// 冒泡排序
	for (int i = 0; i < total - 1; i++) {       // 外层：排序轮数
		for (int j = 0; j < total - 1 - i; j++) { // 内层：相邻对比
			if (arr3[j] > arr3[j + 1]) {
				// 交换两个数
				int temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}

	printf("%d ", arr3);
	return 0;
}
