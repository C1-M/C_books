#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> // 必须包含 qsort 的头文件

//qsort函数模拟实现
//int int_cmp(const void* a, const void* b) {
//    return *(int*)a - *(int*)b; // 直接相减可简化逻辑
//}
//
//int main() 
//{
//    int arr[] = { 5, 2, 9, 1, 5 };
//    int n = sizeof(arr) / sizeof(arr);
//    qsort(arr, n, sizeof(int), int_cmp);
//    //printf("%d ", arr);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    // 结果: {1, 2, 5, 5, 9}
//}





// 比较函数：升序排序
//int int_cmp(const void* a, const void* b) {
//    return *(int*)a - *(int*)b;
//}
//
//int main() {
//    int arr[] = { 5, 2, 9, 1, 5 };
//    // 修正：正确计算元素个数（sizeof(arr[0]) 或 sizeof(int)）
//    int n = sizeof(arr) / sizeof(arr[0]); // 或 sizeof(arr) / sizeof(int)
//
//    // 排序前打印
//    printf("排序前: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // 执行快速排序
//    qsort(arr, n, sizeof(int), int_cmp);
//
//    // 排序后打印（遍历数组）
//    printf("排序后: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]); // 正确打印每个元素
//    }
//    printf("\n"); // 添加换行符使输出更清晰
//
//    return 0;
//}


//sizeof 和 strlen 的对比

//#include <stdio.h>
//int main()
//{
//	char arr1[3] = { 'a', 'b', 'c' };//[a b c]
//	char arr2[] = "abc";             //[a b c \0]
//	printf("%d\n", strlen(arr1));//未知数
//	printf("%d\n", strlen(arr2));//3
//
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4 };//4*4 = 16
//	printf("%zu\n", sizeof(a));//16
//	printf("%zu\n", sizeof(a + 0));//4/8，a+0是首元素的地址
//	printf("%zu\n", sizeof(*a));//4, *a == a[0]
//	printf("%zu\n", sizeof(a + 1));//4/8, a + 1 --> &a[1]
//	printf("%zu\n", sizeof(a[1]));//4
//	printf("%zu\n", sizeof(&a));//4/8, &a是整个数组的地址，依然是地址
//	printf("%zu\n", sizeof(*&a));//16
//	//&a -- int (*)[4]
//	//*&a -- a
//	//sizeof(*&a) == sizeof(a)
//	printf("%zu\n", sizeof(&a + 1));//4/8  &a + 1还是地址
//	printf("%zu\n", sizeof(&a[0]));//4/8
//	printf("%zu\n", sizeof(&a[0] + 1));//4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", sizeof(arr));//6
//	printf("%zu\n", sizeof(arr + 0));//4/8, arr + 0 == &arr[0]
//	printf("%zu\n", sizeof(*arr));//1, *arr == arr[0]
//	printf("%zu\n", sizeof(arr[1]));//1
//	printf("%zu\n", sizeof(&arr));//4/8 -- char(*)[6]
//	printf("%zu\n", sizeof(&arr + 1));//4/8-- char(*)[6]
//	printf("%zu\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", strlen(arr));//未知数
//	printf("%zu\n", strlen(arr + 0));//未知数
//	//printf("%zu\n", strlen(*arr));//*arr == arr[0] == 'a' == 97, 程序会崩溃
//	//printf("%zu\n", strlen(arr[1]));//'b'-98,程序会崩溃
//	printf("%zu\n", strlen(&arr));//未知数  x
//	//char(*)[6]-> const char*
//	printf("%zu\n", strlen(&arr + 1));//未知数 x-6
//	printf("%zu\n", strlen(&arr[0] + 1));//未知数 x-1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zu\n", sizeof(arr));//7
//	printf("%zu\n", sizeof(arr + 0));//4/8
//	printf("%zu\n", sizeof(*arr));//1, arr[0] == *arr
//	printf("%zu\n", sizeof(arr[1]));//1
//	printf("%zu\n", sizeof(&arr));//4/8
//	printf("%zu\n", sizeof(&arr + 1));//4/8
//	printf("%zu\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zu\n", strlen(arr));//6
//	printf("%zu\n", strlen(arr + 0));//6
//	//printf("%zu\n", strlen(*arr));//程序会崩溃
//	//printf("%zu\n", strlen(arr[1]));//程序会崩溃
//	printf("%zu\n", strlen(&arr));//6
//	printf("%zu\n", strlen(&arr + 1));//未知数
//	printf("%zu\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zu\n", sizeof(p));//4/8
//	printf("%zu\n", sizeof(p + 1));//4/8, p+1是b的地址
//	printf("%zu\n", sizeof(*p));//1, *p == 'a'
//	printf("%zu\n", sizeof(p[0]));//1
//	//p[0]  == *(p+0) == 'a'
//	printf("%zu\n", sizeof(&p));//4/8
//	printf("%zu\n", sizeof(&p + 1));//4/8
//	printf("%zu\n", sizeof(&p[0] + 1));//4/8, 'b'的地址
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%zu\n", strlen(p));//6
//	printf("%zu\n", strlen(p + 1));//5
//	printf("%zu\n", strlen(*p));//程序崩溃
//	printf("%zu\n", strlen(p[0]));//程序崩溃
//	printf("%zu\n", strlen(&p));//未知数
//	printf("%zu\n", strlen(&p + 1));//未知数
//	printf("%zu\n", strlen(&p[0] + 1));//5
//	return 0;
//}

