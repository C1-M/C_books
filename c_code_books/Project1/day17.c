#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//    // 定义int变量
//    int num = 100;
//    // int* 整型指针
//    int* int_p = &num;
//
//    // 1. 任意指针自动转为 void*，无需强制转换
//    void* void_p = int_p;
//
//    // 2. void* 转回 int*，再解引用取值
//    int* new_int_p = void_p;
//    printf("num = %d\n", *new_int_p);
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    // 定义int变量，编译器会自动分配4字节内存（假设int占4字节）
//    int num = 10;
//
//    // &num 就是变量num的地址，用%p格式符打印十六进制地址
//    printf("num 的值：%d\n", num);
//    printf("num 的地址：%p\n", &num);
//
//    return 0;
//}




//int main()
//{
//    int arr[3] = { 1, 2, 3 };
//    int* p = arr; // 数组名默认指向第一个元素的地址
//
//    printf("p = %p\n", p);
//    printf("p + 1 = %p\n", p + 1); // 地址增加4字节（int的大小）
//    printf("p + 2 = %p\n", p + 2); // 地址增加8字节
//
//    return 0;
//}






//#include <stdio.h>
//
//int main()
//{
//    int num = 10;
//
//    // 这里的*是类型标识：定义一个int类型的指针p
//    int* p;
//
//    // 给指针p赋值：存储num的地址
//    p = &num;
//
//    // 这里的*是解引用运算符：取出p指向的内存的值
//    printf("*p = %d\n", *p); // 输出：10
//
//    // 通过解引用修改原变量的值
//    *p = 20;
//
//    printf("num = %d\n", num); // 输出：20（原变量被修改）
//
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    int arr[3] = { 1, 2, 3 };
//    int* p = arr; // 数组名默认指向第一个元素的地址
//
//    printf("p = %p\n", p);
//    printf("p + 1 = %p\n", p + 1); // 地址增加4字节（int的大小）
//    printf("p + 2 = %p\n", p + 2); // 地址增加8字节
//
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[][4] = { 0 };
//
//	return 0;
//}

