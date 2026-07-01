#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//动态内存错误常见的内容
//对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		return 1;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int)); //在堆区上申请20个字节的空间
//	if (p == NULL)
//	{
//		perror("use malloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//
//	//释放内存
//	free(p);//err  这里的p不再是空间的起始地址，就会出问题的
//	p = NULL;
//
//	return 0;
//}


//void test()
//{
//    int* p = (int*)malloc(100);
//    free(p);
//    free(p);//重复释放 -- err
//}
//
//int main()
//{
//    test();
//	return 0;
//}

//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//}


//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//
//    int flag = 5;
//    if (flag > 0)
//        return;
//
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    test();
//    //...
//    while (1);
//    return 0;
//}


//题目1：
//#include <stdio.h>
//#include <stdlib.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//#include <string.h>

//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}



//柔性数组（结构体+动态内存）
//struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//};

//算大小的时候不包含柔性数组的内存



//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//
//
//struct st_type
//{
//    int i;
//    int a[0];//柔性数组成员
//};



//为什么使用文件



