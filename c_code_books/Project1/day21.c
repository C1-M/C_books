#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
#include<errno.h>
#include <string.h> 
#include<stdio.h>

//int main()
//{
//	char arr[] = { 1,2,3,4,5 };
//	//memset(arr, 'x', 5);
//	memset(arr, 1, 5);
//	//printf("%s\n", arr);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr);
//	}
//	return 0;
//}




//数据在内存中的存储

//int main()
//{
//	int a = 0x1223344;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (*(char*)&a)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("小端");
//	}
//	return 0;
//}

//int sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int main()
//{
//	int a = 1;
//	if ( 1 == sys)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("小端");
//	}
//	return 0;
//}



//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//%u 是以10进制打印无符号位
//
//	return 0;
//}


//int main()
//{
//	//有符号位char的取值范围问：-128~127
//	char a = 128;
//
//	printf("%u\n", a);
//	//%u 是以10进制打印无符号位
//
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}



//浮点数在内存中存储
//int main()
//{
//    int n = 9;
//    float* pFloat = (float*)&n;
//    printf("n的值为：%d\n", n);//9
//    printf("*pFloat的值为：%f\n", *pFloat);//0.00000
//
//    *pFloat = 9.0;
//    printf("n的值为：%d\n", n);//1091567616
//    printf("*pFloat的值为：%f\n", *pFloat);//9.00000
//    return 0;
//}



//有的浮点数是无法精确保存的
//int main()
//{
//	float f = 1.2;
//
//	return 0;
//}


//int main()
//{
//    int n = 9;
//    float* pFloat = (float*)&n;
//    printf("n的值为：%d\n", n);//9
//    printf("*pFloat的值为：%f\n", *pFloat);//0.00000
//
//    *pFloat = 9.0;
//    printf("n的值为：%d\n", n);//1091567616
//    printf("*pFloat的值为：%f\n", *pFloat);//9.00000
//    return 0;
//}


//#include <math.h>
//#define EXP 0.000001
//int main()
//{
//	if (((0.1 + 0.2) == 0.3) <EXP)
//		printf("==");
//	else
//		printf("!=\n");
//	return 0;
//}




//结构体的特殊声名
//匿名结构体类型：只能使用一次
//struct
//{
//	int a;
//	char b;
//	float c;
//} x;


//结构体的自引用
//struct Node
//{
//	int date;//数据
//	struct Node next;
//};//err


//typedef struct Node
//{
//	int date;//数据
//	struct Node* next;
//} Node;


