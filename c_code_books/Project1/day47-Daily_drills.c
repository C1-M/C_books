#define _CRT_SECURE_NO_WARNINGS
//字符串拷贝
//写一个函数my_strcpy，实现拷贝字符串的功能，假设给定一个字符数组a，再给定一个字符数组
//b，将字符串a中的内容拷贝到字符串b中，拷贝内容包含字符串末尾的\0 字符。

//#include<stdio.h>
////void my_strcpy(char* b,const char* a) {
////	while (*a != '\0') {
////		*b = *a;
////		b++;
////		a++;
////	}
////	*b = '\0';
////}
//void my_strcpy(char* b, const char* a) {
//	// 先赋值再判断，一次性拷贝包含 \0
//	while (*b++ = *a++);
//	*b = '\0';
//}
//
//int main() {
//	char a[] = "hello cm";
//	char b[20] = { 0 };
//
//	my_strcpy(b, a);
//	printf("%s\n", b);
//
//	return 0;
//}






