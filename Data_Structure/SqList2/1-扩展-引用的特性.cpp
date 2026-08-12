#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int a = 10;
//	// 必须初始化引用
//	// int& b; 
//	// eer：编译报错，b 必须初始化
//
//	int& b = a;
//
//	int c = 20;
//	// 这里并非让 b 引用 c，因为 C++ 引用不能改变指向
//	// 这里是一个赋值
//	b = c;
//
//	printf("%p\n", &a); //000000841F38F694
//	printf("%p\n", &b); //000000841F38F694
//	printf("%p\n", &c); //000000841F38F694
//
//
//	return 0;
//}