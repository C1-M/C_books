#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//九九乘法表
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = a; b <= 9; b++)
//		{
//			printf("%d * %d = %d    ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i < 100; i++)
//	{
//		int ge = i % 10;
//		int shi = i / 10;
//
//		if (9 == ge)
//		{
//			a++;
//		}
//		if (9 == shi)
//		{
//			a++;
//		}
//	}
//	printf("%d", a);
//	return 0;
//}


//打印100-200之间的素数
//int main()
//{
//    int n, i;
//    for (n = 100; n <= 200; n++)
//    {
//        int prime = 1; 
//
//        for (i = 2; i < n; i++)
//        {
//            if (n % i == 0)
//            {
//                prime = 0;
//                break;
//            }
//        }
//
//        if (prime)
//        {
//            printf("%d\n", n);
//        }
//    }
//    return 0;
//}


//打印1000年到2000年之间的闰年
//能被 4 整除，且不能被 100 整除 → 闰年
//被 400 整除 → 闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d  ", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	int i = 0;
//	double res = 0.0;
//	for (i = 1; i <= 99; i += 2)
//	{
//		//res += 1.0 / i;
//		res = res + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		//res -= 1.0 / i;
//		res = res - 1.0 / i;
//	}
//	printf("%0.8f", res);
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 1)
//    {
//        printf("%d 是奇数\n", a);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 1)
//    {
//        printf("奇数");
//    }
//    else
//    {
//        printf("偶数");
//    }
//    return 0;
//}

//int main() 
//{
//	//完全初始化
//	//int math[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//double d[5] = { 1,2,3,4,5 };
//
//	//不完全初始化
//	//int math[10] = { 1,2,3,4,5 };
//	//double d[5] = { 1,2 };
//
//	//int date[5] = { 1,2,3,4,5,6 };//错误的写法
//
//	//int age = 10;//初始化
//
//	//int arr1[5] = { 1,2,3,4,5 };
//	//int arr2[] = { 1,2,3,4,5 };
//
//	//int arr3[10] = { 0 };//10 个元素
//	//int arr4[] = { 0 };//1个元素
//	//注意：int 是数组元素的类型
//	//      int [10] 是数组的类型
//
//	//int num = 10;
//	//int arr[10];
//
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(arr[10]));
//
//	//int arr2[5];//int [5]
//	//printf("%zu\n", sizeof(arr2[5]));
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[6]);//[]是一个操作符，下标引用操作符
//	//arr[6] = 70;
//	//printf("%d\n", arr[6]);
//
//	//打印出每个元素
//	//int i = 0;
//	////输出
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	////修改数组的内容是 1-10
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = -(i + 1);
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

// %p 是用来打印地址的
// 1.数组的元素在内存中是连续存放的
// 2.随着数组由低到高排序的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] == %p\n", i, &arr[i]);
//	}
//	return 0;
//}

// sizeof 求数组长度
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%zu\n", sizeof(arr));// 10*4=40,计算整个数组的大小，单位是字节
//	//printf("%zu\n", sizeof(arr[0]));// 4 元素个数的大小
//	//printf("%zu\n", sizeof(arr) / sizeof(arr[0]));// 40/4=10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 二维数组的创建
//int main()
//{
//	int i = 0;
//	// 二维数组的创建
//	int arr_name[3][5];
//	double data[2][6];
//	// 不完全初始化
//	int arr1[3][5] = { 1,2,3 };
//	int arr2[3][5] = { 0 };
//	int arr3[3][5] = { 1,2,3,4,5,6,7 };
//
//	// 完全初始化
//	int arr4[2][3] = { 1,1,1,1,1,1 };
//	int arr4[2][2] = { {1,1},{1,1}};
//	return 0;
//}

// 二维数组的使用
// 二维数组在内存中也是连续存入的
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,8,9,9,1,1,1 };
//	printf("%d\n", arr[0][3]);
//
//	//输出值
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 数组的大小不能自己定义
// vs 默认使用 msvc 这个编译器不支持C99中的变长数组
// 可以在 vs 中添加 clong 插件
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// 练习1：
// 多个字符从两端移动，向中间汇聚
//#include<string.h>
////#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	
//	size_t left = 0;
//	// int left = 0;
//	// int right = strlen(arr1) - 1;
//	// 为什么使用 size_t ?
//	size_t right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		// 休眠时间 1s
//		//Sleep(1000);
//		// 终端清除
//		//system("cls");
//
//		left++;
//		right--;
//	}
//	//printf("%s", arr2);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i <= 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//可以使用二分查找（前提必须是升序，例如：1，2，3，4，5，6，7，8，.....）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int a = 0;// 找不到
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			a = 1;
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (a = 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

// 求平均值：
//int main()
//{
//	int left = 2147483646;
//	int right = 2147483646;
//	printf("%d", (left + right) / 2);//会越界
//	return 0;
//}

//int main()
//{
//	int left = 2;
//	int right = 5;
//	printf("%d", left /2 + right / 2);//会越界
//	return 0;
//}

// 最合理的 求平均值 方法
//int main()
//{
//	int left = 2147483646;
//	int right = 2147483646;
//
//  // (right - left)算出左右两边的距离
//  // (right - left) / 2 左右中间位置
//  // left + (right - left) / 2 左边数开始走向向右的中间，即是平均数
//	//int mid = left + (right - left) / 2; // (right - left)算出左右两边的距离 
//	//printf("%d\n", mid);// 求平均值
//
//	printf("%d\n", left + (right - left) / 2);// 求平均值
//	return 0;
//}

















