#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"


//int Max(int x, int y)
//{
//    return x > y ? x : y;
//}
//
//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//
//    int m1 = MAX(a, b);
//    //int m1 = ((a)>(b)?(a):(b));
//    
//    //int m2 = Max(a, b);
//
//    return 0;
//}


//int main()
//{
//    printf("hello world\n");
//    printf("hello " "world""hehe");
//
//    return 0;
//}

//#define PRINT(val, format)  printf("the value of " #val " is "format"\n", val)
//
//int main()
//{
//	int a = 10;
//	//printf("the value of a is %d\n", a);
//	PRINT(a, "%d");
//
//	float f = 3.5f;
//	//printf("the value of f is %.2f\n", f);
//	PRINT(f, "%.2f");
//
//	return 0;
//}


//void test();
//int main()
//{
//    #define M 100
////    int m = M;
////    //
////#undef M
////
////#define M 1000
////    printf("%d\n", M);
//
//    test();
//
//    return 0;
//}
//
//void test()
//{
//    printf("test()::%d\n", M);
//}


//#include <stdio.h>
////#define __DEBUG__
//
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//#ifdef __DEBUG__
//        printf("%d\n", arr[i]);//为了观察数组是否赋值成功。                
//#endif //__DEBUG__
//    }
//    return 0;
//}



//#define M 0
//int main()
//{
//#if !defined(M)
//    printf("hehe\n");
//#endif
//
//    return 0;
//}