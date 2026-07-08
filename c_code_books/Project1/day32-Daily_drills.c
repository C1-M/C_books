#define _CRT_SECURE_NO_WARNINGS
//打印素数
//使用C语言写一个程序打印100~200之间的素数，数字中间使用空格分割
//素数是指只能被 1 和它 本身 整除的正整数

//方法一：
//#include<stdio.h>
//#include<stdbool.h> //判断素数的真假（true、false）
//int main()
//{
//    for (int i = 100; i <= 200; i++)
//    {
//        int isPrime = true;// 假设是素数
//        for (int n = 2; n * n <= i; n++)
//        {
//            if (i % n == 0)// 能整除 → 不是素数
//            {
//                isPrime = false;
//                break;// 找到一个就够了，跳出循环
//            }
//        }
//        if (isPrime)// 循环结束后仍是素数，才打印
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//方法二：
//#include<stdio.h>
//#include<math.h>  // 需要用 sqrt 函数
//
//int main()
//{
//    for (int i = 100; i <= 200; i++)
//    {
//        int isPrime = 1;
//        for (int j = 2; j <= sqrt(i); j++)  // 只检查到 √i
//        {
//            if (i % j == 0)
//            {
//                isPrime = 0;
//                break;
//            }
//        }
//        if (isPrime)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//方法三：（更优）
//#include<stdio.h>
//
//int main()
//{
//    //printf("2 ");  // 2单独处理
//    // 直接从101开始，只遍历奇数
//    for (int i = 101; i <= 200; i += 2)
//    {
//        int isPrime = 1;
//        for (int n = 3; n * n <= i; n += 2)  // 除数也只试奇数
//        {
//            if (i % n == 0)
//            {
//                isPrime = 0;
//                break;
//            }
//        }
//        if (isPrime)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




//判断三角形
/*
输入三个整数a,b,c，
判断由a,b,c作为三条边组成的三角形，
如果不能组成三角形则输出：非三角形；
如果是三角形，再继续判断，
如果是等边三角形，则输出：等边三角形；
如果是等腰三角形，则输出：等腰三角形；
否则输出普通三角形。
*/

//方法一：
//#include<stdio.h>
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//	{
//		if (((a == b) && (b != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b)))
//		{
//			printf("等腰三角形");
//		}
//		else if ((a == b) && (a == c) && (b == c))
//		{
//			printf("等边三角形");
//		}
//		else
//		{
//			printf("普通三角形");
//		}
//	}
//	else
//	{
//		printf("非三角形");
//	}
//	return 0;
//}

//优化：
//#include<stdio.h>
//int main()
//{
//    int a = 10, b = 10, c = 10;
//
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a == b && b == c)
//        {
//            printf("等边三角形");
//        }
//        else if (a == b || b == c || a == c)
//        {
//            printf("等腰三角形");
//        }
//        else
//        {
//            printf("普通三角形");
//        }
//    }
//    else
//    {
//        printf("非三角形");
//    }
//    return 0;
//}


//方法二：（更优）
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入三角形三边长度：");
//	scanf("%d %d %d", &a, &b, &c);
//
//	// 边长必须为正
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		printf("边长必须为正数\n");
//		return 0;
//	}
//
//	// 排序：三次交换，确保 c 最大
//	if (a > b) { int t = a; a = b; b = t; }
//	if (b > c) { int t = b; b = c; c = t; }
//	if (a > b) { int t = a; a = b; b = t; }
//
//	// 现在 c 最大，只需判断 a + b > c
//	if (a + b > c)
//	{
//		if (a == b && b == c)
//		{
//			printf("等边三角形\n");
//		}
//		else if (a == b || b == c)
//		{
//			printf("等腰三角形\n");
//		}
//		else
//		{
//			printf("普通三角形\n");
//		}
//	}
//	else
//	{
//		printf("不能构成三角形\n");
//	}
//	return 0;
//}





