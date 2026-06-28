#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>

//结构体内存规则
//struct S1
//{
//    char c1;//1 8   1
//    int i;//4   8   4
//    char c2;//1 8   1
//};
//
//struct S2
//{
//    char c1;//1
//    char c2;//1
//    int i;//4
//};
//
//struct S3
//{
//    double d;
//    char c;
//    int i;
//};
//
//struct S4
//{
//    char c1;
//    struct S3 s3;
//    double d;// 2 8 2
//};
////从0开始存数据
////从第二个开始
//int main()
//{
//    //printf("%zu\n", sizeof(struct S1));
//    //printf("%zu\n", sizeof(struct S2));
//
//    struct S1 s1;
//    struct S2 s2;
//    struct S3 s3;
//    struct S4 s4;
//    printf("%zu\n", sizeof(struct S4));//?
//    /*printf("%d\n", offsetof(struct S1, c1));
//    printf("%d\n", offsetof(struct S1, i));
//    printf("%d\n", offsetof(struct S1, c2));*/
//
//
//	return 0;
//}


//修改默认对齐数(仅限于 Windows)
//#pragma pack(1)
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int mian()
//{
//    struct S s;
//    printf("%d\n", sizeof(struct S));
//    return 0;
//}

//#pragma pack(1)     // 设置1字节对齐
//struct s {          // 结构体标签为小写's'
//    char c1;
//    int i;
//    char c2;
//};
//
//int main() {        // 函数名应为main()（原代码误写为mian()）
//    struct s s_var; // 变量声明应为struct s（小写's'，原代码误用大写'S'）
//    printf("%zu\n", sizeof(struct s)); // 使用%zu打印size_t类型（更规范）
//    return 0;
//}



//什么是位段
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct B
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(struct A));//8
//	printf("%zu\n", sizeof(struct B));//16
//	return 0;
//}


//位段的内存分配
