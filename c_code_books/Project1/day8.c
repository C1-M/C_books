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


// static 和 extern
// static 和 extern 是C语言中的关键字
// static 是静态的意思
// ·修饰 局部变量和全局变量
// ·修饰 函数
// extern 用来声明外部文件

// extern 用来声明外部文件符号（生明后全源文件可用）
// 可以使用外部int a = 100【test.c文件中】
//extern int a;
//
////int a = 100;
//
//void text()
//{
//	printf("3:a = %d\n", a);
//}
//int main()
//{
//	{
//		printf("1:a = %d\n", a);
//	}
//	printf("2:a = %d\n", a);
//	text();
//	return 0;
//}


//void test()
//{
//	int n = 10;// n 运行打印后直接销毁（生命周期结束）
//	n++;
//	printf("%d ", n); // 打印 11 11 11 11 11
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

// static 修饰局部变量
//void test()
//{
//	static int n = 10; // n 运行后保留原来的值不会销毁（生命周期延长）
//	n++;
//	printf("%d ", n); // 打印 11 12 13 14 15
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


// static 修饰全局变量（全部源文件都可以使用）
//
//static int g_val = 2020;
//// static 修饰全局变量
//// 外部链接属性，变成内部链接属性
//// 只能在本源件内使用
//// 不对外使用
//
////extern int g_val2; // 声名外部符号
//
//int main()
//{
//	//printf("%d\n", g_val2);
//  printf("%d\n", g_val);
//	return 0;
//}

//static 修饰函数与修饰全局变量类似
////extern int Add3(int x, int y);// 声名外部符号
//
//static int Add2(int x, int y);// 将外部符号只用于本源文件
//int main()
//{
//	int a = 19;
//	int b = 22;
//	printf("%d", Add2(a, b));
//	//printf("%d", Add3(a, b));
//	return 0;
//}
//
//int Add2(int x, int y)
//{
//	return x + y;
//}



