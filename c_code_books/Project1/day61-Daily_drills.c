#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //这里的()就是作为函数调用操作符。
//	test2("hello bit.");//这里的()就是函数调用操作符。
//	return 0;
//}


////代码1：变量的定义
//struct Point {
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量 p1
//
//struct Point p2; //定义结构体变量 p2
//
////代码2：初始化。
//struct Point p3 = { 10, 20 };
//struct Stu { //类型声明
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s1 = { "zhangsan", 20 };//初始化
//struct Stu s2 = { .age = 20, .name = "lisi" };//指定顺序初始化
//
////代码3
//struct Node {
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化



//#include <stdio.h>
//#include <string.h>
//struct Point {
//    int x;
//    int y;
//};
//
//struct Stu {
//    char name[15];
//    int age;
//};
//
//struct Node {
//    int data;
//    struct Point p;
//    struct Node* next;
//};
//
//int main(void)
//{
//    // 代码1：变量的定义
//    struct Point p1 = { 1, 2 };
//    struct Point p2 = { 3, 4 };
//
//    printf("p1 = (%d, %d)\n", p1.x, p1.y);   // 用 . 访问
//    printf("p2 = (%d, %d)\n", p2.x, p2.y);
//
//    // 代码2：初始化
//    struct Point p3 = { 10, 20 };
//    printf("p3 = (%d, %d)\n", p3.x, p3.y);
//
//    struct Stu s1 = { "zhangsan", 20 };
//    printf("s1 = %s, %d岁\n", s1.name, s1.age);
//
//    struct Stu s2 = { .age = 20, .name = "lisi" };
//    printf("s2 = %s, %d岁\n", s2.name, s2.age);
//
//    // 代码3：结构体嵌套初始化
//    struct Node n1 = { 10, {4, 5}, NULL };
//    struct Node n2 = { 20, {5, 6}, NULL };
//
//    printf("n1: data=%d, p=(%d,%d), next=%p\n",n1.data, n1.p.x, n1.p.y, (void*)n1.next);
//    printf("n2: data=%d, p=(%d,%d), next=%p\n",n2.data, n2.p.x, n2.p.y, (void*)n2.next);
//
//    // 指针可以用 -> 访问成员
//    struct Point* pp = &p1;      // 指向结构体变量的指针
//    struct Stu* ps = &s1;
//    struct Node* pn = &n1;
//
//    printf("\n用 -> 访问\n");
//    printf("pp->x = %d, pp->y = %d\n", pp->x, pp->y);           // 1, 2
//    printf("ps->name = %s, ps->age = %d\n", ps->name, ps->age); // zhangsan, 20
//    printf("pn->data = %d, pn->p.x = %d\n", pn->data, pn->p.x); // 10, 4
//
//    // 通过指针修改成员
//    pp->x = 100;
//    ps->age = 25;
//    printf("\n修改后\n");
//    printf("p1.x = %d（被指针改成了100）\n", p1.x);   // 100
//    printf("s1.age = %d（被指针改成了25）\n", s1.age);// 25
//
//    // 两种写法等价
//    printf("pp->y = %d\n", pp->y);          // 2
//    printf("(*pp).y = %d\n", (*pp).y);      // 2
//
//    return 0;
//}



