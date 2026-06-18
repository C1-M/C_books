#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 函数栈帧的创建和销毁

// 局部变量是什么创建的？
// 为什么局部变量的值是随机值？
// 形参和实参是什么关系？
// 函数调用是怎么做的？


//1. 寄存器 eax ebx ecx edx ebp esp
//                          √  √  重点讲这两个寄存器

//ebp(栈底指针)  esp(栈顶指针）

//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}



// 位操作符
// 使用案例：变态面试题（不创建第三位，将两位数交换）
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	printf("输入 a：");
//	scanf("%d", &a);
//	printf("输入 b：");
//	scanf("%d", &b);
//	printf("交换前：a = %d b = %d\n", a, b);
//
//	//第一种：（最常用）
//	// 交换
//	//int c = 0;
//	//c = b;
//	//b = a;
//	//a = c;
//
//	//第二种：
//	//a = a + b;
//	//b = a - b;
//	//a = b - a;
//
//	//第三种：(最优的)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	// 0^a = a
//	// a^a = 0
//	// 3^3^5 = 5
//	// 3^5^3 = 5
//
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0; 
//}

// 1234，求出一位，看是不是3，然后统计

//判断一个数是不是2的次方数
// 第一种：
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if ((num % 2) == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

// 第二种
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//if (((num >> i) & 1) == 1) //效率不是很高
//		//或者
//		(num != 0) && (num & (num - 1)) == 0;
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//练习2：二进制位置 0 或者 1
//编写代码将 13 二进制序列的第五位修改为 1，然后再改回 0
//int main()
//{
//    int n = 13;
//    int k = 5;  // 表示要修改的是"从右数第5位"（编号从1开始）
//
//    printf("初始值 n = %d，二进制低8位：0000 1101\n", n);
//
//    // 第一步：将第5位修改为1
//    n |= (1 << (k - 1));
//    printf("第5位置1后 n = %d，二进制低8位：0001 1101\n", n);
//
//    // 第二步：将第5位改回0
//    n &= ~(1 << (k - 1));
//    printf("第5位置0后 n = %d，二进制低8位：0000 1101\n", n);
//
//    return 0;
//}


//逗号操作符
//逗号表达式：就是使用逗号隔开。从左到右依次计算
// exp1,exp2,exp3
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("%d\n", c);// 13
//	return 0;
//}

//还可以使用
//if(a = b + 1, c = a / 2)
//if(a = b + 1, c = a / 2; a > b, a < b; a++, b++)


//结构体

//结构的声名
//struct tag //tag 可以自定义
//{
//	member;
//}member;

//列如：
//struct student
//{
//	char name[20];//名字
//	int age;//年龄
//	float score;//成绩
//}s6,s7,s8;//全局变量（可写，可不写）
//
////全局变量
//struct student s5;
//struct student s6;
//
//int main()
//{
//	//int num1 = 0;
//	//局部变量
//	struct student s1;
//	struct student s2;
//	struct student s3;
//
//	return 0;
//}


//结构体的初始化
//struct student
//{
//	char name[20];//名字
//	int age;//年龄
//	float score;//成绩
//};
//
//struct test
//{
//	int n;
//	struct student s;
//};
//
//int main()
//{
//	struct student s1 = { "list",18,85.5f };
//	struct student s2 = { .score=65.5f,.age=16,.name="小孟"};
//	struct test t = { 100,{ "list",18,85.5f } };
//
//	//打印结构体的数据
//	//打印 student 结构体
//	printf("%s %d %.lf\n", s1.name, s1.age, s1.score);
//	//打印 student 结构体
//	printf("%d %s %d %.lf\n", t.n, t.s.name, t.s.age, t.s.score);
// 
//  s1.age = 20;
//  printf("%s %d %.lf\n", s1.name, s1.age, s1.score);
//
//	return 0;
//}


//操作符的属性：优先级、结合性

//若优先级相同则考虑结合性
//结合性
//int main()
//{
//	printf("%d",1 + 2 + 3);//左向右计算
//	return 0;
//}


//表达式求值
//整型提升
//...

//int main()
//{
//	char a = 10;
//	// 00000000000000000000000000001010
//	// 00001010 - a 截断
//
//	char b = 120;
//	// 00000000000000000000000001111000
//	// 01111000 - b
//
//	char c = 0;
//	c = a + b;
//	// 00000000000000000000000000001010
//	// 00000000000000000000000001111000
//	// 10000010 - c
//	printf("%u\n", c);// %u 无符号整型
//
//	// 11111111111111111111111110000010
//	// 10000000000000000000000001111101
//	// 10000000000000000000000001111110
//	printf("%d\n", c);// %d 有符号整型
//
//	return 0;
//}


//问题表达式
//表达式1：a * b + c * d + e * f

//表达式2：c + --c;

//表达式3：
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("%d", i);
//	return 0;
//}

//表达式4：
//int b()
//{
//	static int count = 1;
//	return ++count;
//}
//int main() 
//{
//	int a;
//
//	a = b() - b() * b();
//
//	printf("%d\n", a);
//
//	return 0;
//}

//不要写出相应有问题的表达式


