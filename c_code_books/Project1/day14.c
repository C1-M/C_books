#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //strcmp 头文件

//二级指针：存放一级指针的地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa就是指针变量（一级指针变量）
//	int** ppa = &pa;//ppa是指针变量（二级指针变量）
//	//int*** pppa= &ppa;//pppa是指针变量（三级级指针变量）
//
//	**ppa = 100;
//
//	printf("%d\n", **ppa);
//
//	return 0;
//}

//指针数组
//int arr[10];//整型数组 - 数组 - 是存放整型数据的数组
//char arr[5];//字符数组 - 数组 - 是存放字符数据的数组

//指针数组 - 是存放指针的数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	
//	int* arr[3] = { arr1,arr2,arr3 };
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
//
//	return 0;
//}


//字符指针变量
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc是字符指针变量
//	return 0;
//}

//这种写法不够严谨
//int main()
//{
//	char* ps = "abcdef";//常量字符串，这里的赋值是把首字符a的地址赋值给ps
//	char arr[] = "abcdef";
//
//	printf("%c\n", *ps);// a
//	printf("%s\n", ps); // abcdef
//
//	return 0;
//}

//严谨的写法
//int main()
//{
//	const char* ps = "abcdef";
//	//*ps = 'w';
//	printf("%s\n", ps);
//	return 0;
//}

//int main()
//{
//	char* ps[3] = { "zhangsan","list","wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", ps[i]);
//	}
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//[10]中的数字必须写
//	// p 就是数组指针变量
//
//	char ch[5] = { 'a','b' };
//	char (*pc)[5] = &ch;
//
//	return 0;
//}
//上面的数组指针变量有一定的不便

//二维数组传参的本质
//void print(int arr[3][5], int r, int c)
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
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);//arr是数组名，数组名是数组首元素的地址（就是第一行这个一维数组的地址）
//
//	return 0;
//}

//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//arr[i][j] = *(*(arr+i)+j) = *(arr[i]+j)
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);//arr是数组名，数组名是数组首元素的地址（就是第一行这个一维数组的地址）
//
//	return 0;
//}


//函数指针变量
// 
//函数名就是函数的地址
//&函数名还是函数的地址
//没有区别
//int test()
//{
//	pritnf("hehe\n");
//}
//int main()
//{
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//
//	void (*pf)() = test; //pf就是函数指针变量
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	
//	//int r = (*pf)(3, 5);
//	int r = pf(30, 50);//* 可写，可不写
//
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	(*(void(*)())0)();
//
//	return 0;
//}


//int main()
//{
//	void (*signal(int, void (*)(int)))(int);
//	//函数的返回类型 - 函数指针类型
//
//	return 0;
//}


//typedef 关键字：只能对类型重命名
//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num = 0;
//
//	return 0;
//}

//typedef unsigned int pint_t;
//
//int main()
//{
//	int* p1;
//	pint_t p2;
//
//	return 0;
//}

//typedef unsigned int pint_t;
//int main()
//{
//	int* p1, p2;
//	//p1的类型是指针变量
//	//p2的类型是整型
//
//	int* p1, * p2;
//	//p1的类型是指针变量
//	//p2的类型是指针变量
//
//	int* p1, * p2;
//	//p1的类型是指针变量
//	//p2的类型是指针变量
//
//	pint_t p1, p2;
//	//p1的类型是指针变量
//	//p2的类型是指针变量
//
//	return 0;
//}

//typedef int (*parr_t)[5];
//int main()
//{
//	int arr[5] = { 0 };
//	int (*pa)[5] = &arr;
//	parr_t pd = &arr;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//typedef int (*pf_t)(int, int);
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	pf_t pf2 = Add;
//	return 0;
//}


//typedef void (*pf_t)(int);
//int main()
//{
//	void (*signal(int, void (*)(int)))(int);
//	//函数的返回类型 - 函数指针类型
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}


//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x + y;
//}int Mul(int x, int y)
//{
//	return x + y;
//}int Div(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//
//	int(*pfarr[4])(int, int) = { Add,Sub,Mul,Div };
//
//	return 0;
//}

//加法运算
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("-----------------------------------\n");
//	printf("-------  1.add     2.sub      -----\n");
//	printf("-------  3.mul     4.div      -----\n");
//	printf("-------  0.exit               -----\n");
//	printf("-----------------------------------\n");
//}
//
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int r = 0;
////	do
////	{
////		menu();
////		printf("请选择：");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("请输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			r = Add(x, y);
////			printf("结果是：%d\n", r);
////			break;
////		case 2:
////			printf("请输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			r = Sub(x, y);
////			printf("结果是：%d\n", r);
////			break;
////		case 3:
////			printf("请输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			r = Mul(x, y);
////			printf("结果是：%d\n", r);
////			break;
////		case 4:
////			printf("请输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			r = Div(x, y);
////			printf("结果是：%d\n", r);
////			break;
////		case 0:
////			printf("退出计算器\n");
////			break;
////		default:
////			printf("输入错误，请输入0-4的值\n");
////			break;
////		}
////	} while (input);
////	
////	return 0;
////}
//
////主函数优化：
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		//函数指针数组 - 转移表
//		int (*pfArr[])(int, int) = { NULL,Add,Sub,Mul,Div };
//		//                            0    1   2   3   4
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = pfArr[input](x, y);
//			printf("结果是：%d\n", r);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误，请输入0-4的值\n");
//		}
//
//	} while (input);
//	
//	return 0;
//}





//豆包优化代码：
//#include <limits.h> // 用于整数溢出检查
//
//// 加法运算（增加溢出检查）
//int Add(int x, int y)
//{
//    // 检查加法溢出：同号相加结果变号则溢出
//    if ((y > 0 && x > INT_MAX - y) || (y < 0 && x < INT_MIN - y)) {
//        printf("错误：加法运算溢出！\n");
//        return 0;
//    }
//    return x + y;
//}
//
//// 减法运算（增加溢出检查）
//int Sub(int x, int y)
//{
//    // 检查减法溢出：减去负数等于加正数，可能溢出
//    if ((y < 0 && x > INT_MAX + y) || (y > 0 && x < INT_MIN + y)) {
//        printf("错误：减法运算溢出！\n");
//        return 0;
//    }
//    return x - y;
//}
//
//// 乘法运算（增加溢出检查）
//int Mul(int x, int y)
//{
//    // 简单的乘法溢出检查（覆盖大部分常见情况）
//    if (x != 0 && y != 0 && (x > INT_MAX / y || x < INT_MIN / y)) {
//        printf("错误：乘法运算溢出！\n");
//        return 0;
//    }
//    return x * y;
//}
//
//// 除法运算（修复：处理除数为0）
//int Div(int x, int y)
//{
//    if (y == 0) {
//        printf("错误：除数不能为0！\n");
//        return 0;
//    }
//    return x / y;
//}
//
//void menu()
//{
//    printf("-----------------------------------\n");
//    printf("-------  1.add     2.sub      -----\n");
//    printf("-------  3.mul     4.div      -----\n");
//    printf("-------  0.exit               -----\n");
//    printf("-----------------------------------\n");
//}
//
//// 清空输入缓冲区的工具函数
//void clearInputBuffer()
//{
//    // 读取缓冲区中所有剩余字符，直到遇到换行符或文件结束
//    while (getchar() != '\n' && getchar() != EOF);
//}
//
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int r = 0;
//
//    // 修复：将函数指针数组移到循环外部，只初始化一次
//    int(*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//    do
//    {
//        menu();
//        printf("请选择：");
//
//        // 修复：检查scanf返回值，处理非数字输入
//        if (scanf("%d", &input) != 1) {
//            printf("输入错误，请输入数字！\n");
//            clearInputBuffer(); // 清空错误输入
//            continue;
//        }
//
//        if (input >= 1 && input <= 4)
//        {
//            printf("请输入两个操作数：");
//            // 修复：同样检查操作数的输入合法性
//            if (scanf("%d%d", &x, &y) != 2) {
//                printf("输入错误，请输入两个整数！\n");
//                clearInputBuffer();
//                continue;
//            }
//
//            r = pfArr[input](x, y);
//            // 只有运算成功时才打印结果（错误情况已在函数内提示）
//            if (!(input == 4 && y == 0) &&
//                !((input == 1 && ((y > 0 && x > INT_MAX - y) || (y < 0 && x < INT_MIN - y))) ||
//                    (input == 2 && ((y < 0 && x > INT_MAX + y) || (y > 0 && x < INT_MIN + y))) ||
//                    (input == 3 && (x != 0 && y != 0 && (x > INT_MAX / y || x < INT_MIN / y))))) {
//                printf("结果是：%d\n", r);
//            }
//        }
//        else if (input == 0)
//        {
//            printf("退出计算器\n");
//        }
//        else
//        {
//            printf("输入错误，请输入0-4的值\n");
//        }
//
//    } while (input);
//
//    return 0;
//}






//回调函数是什么？通过函数指针调用的函数
//qsort使用举例
//qsort函数的模拟实验

//加法运算
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("-----------------------------------\n");
//	printf("-------  1.add     2.sub      -----\n");
//	printf("-------  3.mul     4.div      -----\n");
//	printf("-------  0.exit               -----\n");
//	printf("-----------------------------------\n");
//}
//
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	r = pf(x, y);
//	printf("结果是：%d\n", r);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请输入0-4的值\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}




//qsort
//qsort是一个库函数，是用来对数据进行排序的
// 
// 要求：函数的返回值能体现出p1和p2指向的数据的大小
// //p1指向的数据>p2指向的数据，返回>0的数字
// //p1指向的数据<p2指向的数据，返回<0的数字
// //p1指向的数据==p2指向的数据，返回0
// 
//void qsort(void* base, //指针，指向了要排序的数组的第一个元素
//	       size_t num, //base 指向的数组的元素个数
//	       size_t size, //base 指向的数组中一个元素的字节
//	       int (*comper)(const void* p1, const void* p2)//函数指针 - 应该指向一个行数
//		   //指向的这个函数用来比较base指向的数组中任意两个数据的大小
//           );



//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}

//void print_arr(int* arr, int sz);//声名
//优化
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);//升序
//	//return (*(int*)p2 - *(int*)p1);//降序
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对数组进行排序 - 升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//cmp_stu_by_age(const void* p1, const void* p2)
//{
//	//return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
//	return (((struct Stu*)p1)->age) - ((struct Stu*)p2)->age;
//}
//
//cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp((*(struct Stu*)p1).name, (*(struct Stu*)p2).name);
//}
//
//void test2()
//{
//	struct Stu arr[] = {{"zhangsan",18},{"list",25}, {"wagnwu",15}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);//按年龄排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);//按名字排序
//
//}
//
//void test3()
//{
//	struct Stu s = { "zhangsan",28 };
//	printf("%s %d\n", s.name, s.age);
//
//	struct Stu* ps = &s;
//	printf("%s %d\n", (*ps).name, (*ps).age);//完全一样
//	printf("%s %d\n", ps->name, ps->age);//完全一样（直接使用这种方法）
//}
////结构体成员访问：
////1.结构体变量.成员
////2.结构体变量->成员
//
//int main()
//{
//	//test1();//测试qsort排序整型数组
//	//test2();//测试qsort排序结构体数据
//	test3();
//	return 0;
//}




//qsort函数模拟实现
