#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>

//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//int main()
//{
//    //struct A sa = { 0 };
//    //scanf("%d", &sa._b);//这是错误的
//
//    //正确的示范
//    int b = 0;
//    scanf("%d", &b);
//    sa._b = b;
//    return 0;
//}

//联合体的应用

//struct gift_list
//{
//	//公共属性
//};
//
//
//int main()
//{
//
//	return 0;
//}


//联合体的练习

//int chaeck_sys()
//{
//	int n = 1;
//	if (*(char*)&n = 1)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}



//枚举：一一列举
//比如：星期、性别、三色
//enum SEX
//{
//	//枚举类型的可能取值 - 枚举类型
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum SEX
//{
//	//枚举类型的可能取值 - 枚举类型
//	MALE = 3,
//	FEMALE,
//	SECRET
//};
//
//enum Color
//{
//	RED,
//	GREN,
//	BLUE
//};
//
//int main()
//{
//	//enum SEX sex;
//	//enum Color c = RED;
//	printf("%d\n", MALE);
//	printf("%d\n", RED);
//	printf("%d\n", BLUE);
//
//	return 0;
//}


//枚举的优点
//...

//enum Color//颜?
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//enum Color clr = GREEN;//使用枚举常量给枚举变量赋值



//动态内存管理
//int main()
//{
//	int*p = (int*)malloc(20);//在堆区上申请了20个空间
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	return 0;
//}



//free


//int main()
//{
//	int*p = (int*)malloc(20);//在堆区上申请了20个空间
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//void test()
//{
//	int arr[] = { 0 };
//	int num = 10;
//}
//int main()
//{
//	test();
//
//	return 0;
//}



//calloc
//int main()
//{
//	int*p = (int*)calloc(5, 20);
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//realloc

//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	//希望空间能放10个整型
//	int* ptr = (int*)realloc(p, 100 * sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("use realloc");
//		return 1;
//	}
//	else
//	{
//		p = ptr;//继续使用p来维护空间
//		ptr = NULL;
//	}
//	//继续使用
//	//6 7 8 9 10
//	for (i = 5; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}



