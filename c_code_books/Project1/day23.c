#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




//结构体传参
//struct S
//{
//    int data[1000];
//    int num;
//};
//
//void print1(struct S t)
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", t.data[i]);
//    }
//    printf("\n");
//    printf("%d\n", t.num);
//}
//
//void print2(const struct S* ps)
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", ps->data[i]);
//    }
//    printf("\n");
//    printf("%d\n", ps->num);
//}
//
//int main()
//{
//    struct S s = { {1,2,3,4,5}, 100 };
//    print1(s);
//    print2(&s);
//
//
//    return 0;
//}


//结构体实现位段
//struct A
//{
//    int _a : 2;//表示 0、1、2、3 时
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//struct B
//{
//    int _a;//4-32
//    int _b;//32
//    int _c;//32
//    int _d;//32
//};
//
//int main()
//{
//    printf("%zu\n", sizeof(struct A));//8
//    printf("%zu\n", sizeof(struct B));//16
//
//    return 0;
//}



//位段分配空间（避免使用位段）
//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//
//    return 0;
//}


//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//
//    return 0;
//}

//位段存在跨平台问题：能很好的节省空间，但是有跨平台问题

//位段的注意事项：
//位段的几个成员共有同一个字节，这样有些成员的起始位置并不是某个字节的起始位置，那么这些位
//置处是没有地址的。内存中每个字节分配一个地址，一个字节内部的bit位是没有地址的。
//所以不能对位段的成员使用&操作符，这样就不能使scanf直接给位段的成员输?值，只能是先输
//放在一个变量中，然后赋值给位段的成员。
//


//联合体(也叫共用体)
//union Un
//{
//	char c;//1
//	int i; //4
//};
//
//int main()
//{
//	union Un un;
//	printf("%zu\n", sizeof(un));
//	printf("&un   = %p\n", &un);
//	printf("&un.c = %p\n", &(un.c));
//	printf("&un.i = %p\n", &(un.i));
//
//	return 0;
//}


//联合体大小的计算
//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(union Un));
//	return 0;
//}


//union Un
//{
//	short c[7];//14  2 8 2
//	int i;//4          8 4
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(union Un));
//	return 0;
//}


//联合体的应用







