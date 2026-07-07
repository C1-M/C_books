#define _CRT_SECURE_NO_WARNINGS
//打印1-100之间的奇数：
//不能被 2 整除的整数，除以 2 余数是 1。
//个位是：1、3、5、7、9
//为了更好的了解，我将引入 a（循环次数） , b （打印次数）

int a = 0;
int b = 0;
//第一种方法：
//#include<stdio.h>
//int main()
//{
//	int n = 100;
//	while (n--)
//	{
//		a++;
//		if (n % 2 == 1)
//		{
//			printf("%d\n", n);
//			b++;
//		}
//	}
//	printf("循环次数：%d\n", a);//循环次数：100
//	printf("打印的次数：%d\n", b); //打印了：50次
//	return 0;
//}

//第二种方法：
//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		a++;
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//			b++;
//		}
//			
//	}
//	printf("循环次数：%d\n", a);//循环次数：101
//	printf("打印的次数：%d\n", b); //打印了：50次
//	return 0;
//}

//第三种方法：（更优）
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i += 2)
//	{
//		a++;
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//			b++;
//		}
//			
//	}
//	printf("循环次数：%d\n", a); //循环次数：50
//	printf("打印的次数：%d\n 次", b); //打印了：50次
//	return 0;
//}



//打印九九乘法表
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("\n");
//		for (int n = 1; n <= i; n++)
//		{
//			printf("%d * %d = %d ", i, n, i * n);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("\n");
//		// 内层循环 n <= i
//		for (int n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%-2d ", n, i, i * n);
//			a++; 
//		}
//	}
//	printf("\n\n一共打印了 %d 个乘法算式\n", a);
//	return 0;
//}