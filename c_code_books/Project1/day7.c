#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
// 1.库函数（也是一种函数，只是别人已经帮助我们实现了，只需要直接使用）
// 1.2 标准函数（ANSI C规定的函数标准）和头文件(库函数根据功能的划分，都在不同的头文件中进行了声名)

// 自定义函数：
//ret_type fun_name(形式参数) //函数头：函数名，参数，返回值类型
//{
//
//}函数体
// 
// ret_type：
// 1.有返回值，就得说明类型具体是什么
// 2.没有返回值，就写void
// 
// fun_name(形式参数)：
// 1.有参数，说明参数的个数和类型、名字是什么
// 2.如果没有参数就写void

// 例如：两个数相加
//// 函数的定义
//int add(int a, int b)
//{
//	//int d = a + b;
//	//return d;
//
//	return a + b;
//}
//int main()
//{
//	int c = 0;
//	int e = 0;
//	int r = 0;
//	printf("请输入a b两位数，用空格隔开：");
//	//输入
//	scanf("%d %d", &e, &r);
//
//	// 计算
//	int q = add(e, r);
//	
//	// 输出
//	printf("a + b = %d\n", q);
//	//printf("%d\n", name(e, r));
//
//	return 0;
//}


//形参和实参
//int Add(int x, int y)//形参，有独立空间
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//
//	//计算
//	int c = Add(a, b);//实参：修改数据时不影响形参
//	
//	printf("%d\n", c);
//	return 0;
//}

// 判断是否为闰年
//#include<stdbool.h>
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	//判断是否是闰年
//	if (is_leap_year(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}


// return 语句

//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == -1)
//		return;//提前返回，适合函数viod，
//
//	printf("%d\n", n);
//}

//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		if (i == 5)
//			return;//zhi
//		printf("%d ", i);// 0 1 2 3 4 
//	}
//	printf("结束", i);// 不执行
//}

//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);// 0 1 2 3 4 
//	}
//	printf("结束", i);// 执行
//}
//int main()
//{
//	test();
//	return 0;
//}

//test() // 如果前面没有写返回函数的类型则默认int类型
//{
//	return 3.5;
//}
//int main()
//{
//	double d = test();
//	printf("%f\n", d);
//	return 0;
//}

//int test()
//{
//	printf("haha\n");
//	// 没有return返回值，函数的返回值是未知的
//}
//int main()
//{
//	printf("%d\n", test());// 输出 haha 5
//	return 0;
//}


//main 函数的写法
//推荐写法
//int main()
//{
//
//	return 0;
//}

//古来的写法
//void main(void)
//{
//	return 0;
//}

//void 明确表示main函数不接收参数
//int main(void)
//{
//	return 0;
//}

//dev c++ 默认就是怎么写的
//main函数确实有能力接收参数的，参数也是有意义的，也能使用
//int main(int argc, char* argv[])
//{
//	
//	return 0;s
//}

// 数组做为函数参数
// 
//void set_arr(int arr2[10], int sz2)// 10 可以省略不写
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//void print_arr(int arr2[10], int sz2)// 10 可以省略不写
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//写一个函数将数组arr的内容，全部设置为 -1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//设置数组元素
//	set_arr(arr, sz);
//	//打印数组元素
//	print_arr(arr, sz);
//	return 0;
//}

//void set_arr(int arr[], int sz)// 10 可以省略不写
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)// 10 可以省略不写
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//写一个函数将数组arr的内容，全部设置为 -1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//设置数组元素
//	set_arr(arr, sz);
//	//打印数组元素
//	print_arr(arr, sz);
//	return 0;
//}

//void ste_arr2(int arr[3][5], int r, int c)// 行可以省略 ，列不可以省略
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			arr[i][j] = i + j;
//		}
//	}
//}
//void print_arr2(int arr[3][5], int r, int c)// 行可以省略 ，列不可以省略
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	ste_arr2(arr, 3, 5); // 3 行 5 列
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//void ste_arr2(int arr[][5], int r, int c)// 行可以省略 ，列不可以省略
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			arr[i][j] = i + j;
//		}
//	}
//}
//void print_arr2(int arr[][5], int r, int c)// 行可以省略 ，列不可以省略
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[3][5] = { 0 };//行不可以省略
//	ste_arr2(arr, 3, 5); // 3 行 5 列
//	print_arr2(arr, 3, 5);
//	return 0;
//}


//嵌套调用和链式访问
//嵌套调用：就像乐高零件一样

// 1   2  3  4  5  6  7  8  9 10 11 12
// 31 28 31 30 31 30 31 31 30 31 31 30
//    29

//bool is_leab_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int get_days_if_month(int y, int m)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31, 30 };
//	int d = days[m];
//	if (is_leab_year(y) && m == 2)
//	{
//		d += 1;
//	}
//	return d;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	//计算 year 年，month 月有多少天
//	int day = get_days_if_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}





