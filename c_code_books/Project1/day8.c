#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<tgmath.h>
#include<stdbool.h>
// 函数
// C语言中我们一般会见到的函数：库函数、自定义函数
// 封装性、复用性（提升了软件开发的效率）

// 库函数
// 标准库和头文件
// C语言的国际标准规定了一些常用的函数标准，这个标准就称为：标准库
// 编译器厂商根据C语言标准就给出了一系列函数：库函数
//
// 头文件：每个头文件中都包含了相关的功能

//int main()
//{
//	printf("%lf\n", sqrt(16));
//
//	return 0;
//}

// 函数的声明和定义
//
// 单个文件
// 函数的调用需要先声明后使用
// 函数的定义也是一种特殊的声明，所以如果函数定义放在调用之前也是可以的
//bool is_lesp_year(int y);// 函数声名 
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_lesp_year(year))
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}
//bool is_lesp_year(int y)// 单文件中 放后需要前面声名
//{
//	if ((y % 400 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return true;
//	else
//		return false;
//}



// 多文件
// 在.h 中函数声名 int Add(int x, int y);
// 在另外文件.c 中函数定义：
/*
int Add(int x, int y)
{
	return x + y;
}
*/
//在.c引用文件中 引用添加 #include "add.h"


//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//Add(int x, int y)
//{
//	return x + y;
//}



//打印九九乘法表
//int main() 
//{
//	int i = 0;
//	int j = 0;
//	// i=1初始化 → 检查i≤9 → 执行循环体 → i++
//	for (i = 1; i <= 9; i++)
//	{       
//		for (j = 1; j <= i; j++) 
//		{   
//			// 内层循环控制每行列数
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n"); // 换行
//	}
//	return 0;
//}

//int main()
//{
//    int password = 0;
//    int correct = 2026;
//
//    // 执行循环体 → 检查条件 → 为真则再次执行循环体。
//    do
//    {
//        printf("请输入密码（至少尝试1次）：");
//        scanf("%d", &password);
//        if (password != correct)
//        {
//            printf("密码错误！\n");
//        }
//    } while (password != correct); // 条件为真时继续循环
//
//    printf("登录成功！\n");
//    return 0;
//}

