#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main() {
//	//int a = 0;
//
//	//!a; 
//	//// ! 逻辑非（逻辑取反），假变真，真变假
//	//// 0代表假，非0代表真
//	//printf("%d\n", !a); // 1
//	//printf("%d\n", !1); // 0
//	//printf("%d\n", !0); // 1
//	//printf("%d\n", !4); // 0
//
//	
//
//	//int b = 1;
//	//b++; 
//	//// 类似于
//	//// 旧值：b = 1; 
//	//// 新值：b = b + 1 = 2;
//	//// 后置++，先使用旧值，再使用新值
//	//printf("%d\n", b);
//
//	//b = 1;
//	//++b;
//	//// 类似于
//	//// 新值：b = b + 1 = 2;
//	//// 前置++，直接使用新值
//	//printf("%d\n", b);
//
//	//int a = 1;
//	//int b = 1;
//
//	//// 后置++：先取值 1 参与运算，再自增
//	//int x = a++; // x = 1，然后 a 变成 2
//	//printf("a++ : x = %d, a = %d\n", x, a);   // x = 1, a = 2
//
//
//	//// 前置++：先自增，再取值 2 参与运算
//	//int y = ++b; // b 先变成 2，然后 y = 2
//	//printf("++b : y = %d, b = %d\n", y, b);   // y = 2, b = 2
//
//	//int c = 1;
//	//int d = 1;
//
//	//// 后置--：先取值 1 参与运算，再自减
//	//int z = c--;   // z = 1，然后 c 变成 0
//	//printf("c-- : z = %d, c = %d\n", z, c);   // z = 1, c = 0
//
//	//// 前置--：先自减，再取值 0 参与运算
//	//int w = --d;   // d 先变成 0，然后 w = 0	
//	//printf("--d : w = %d, d = %d\n", w, d);   // w = 0, d = 0
//
//	//int p = 66;
//	//printf("%p\n", &p); //00AFFE68
//	//// 打印 p 的内存地址（一串十六进制数）
//
//	///* 1. 对类型求大小 */
//	//printf("sizeof(int)    = %zu 字节\n", sizeof(int));
//	//printf("sizeof(char)   = %zu 字节\n", sizeof(char));
//	//printf("sizeof(double) = %zu 字节\n", sizeof(double));
//	//printf("sizeof(float)  = %zu 字节\n", sizeof(float));
//	//printf("sizeof(long)   = %zu 字节\n", sizeof(long));
//
//	//printf("\n");
//	///* 2. 对变量求大小 */
//	//int a;
//	//printf("sizeof(a)      = %zu 字节\n", sizeof(a));
//
//	///* 3. 验证 sizeof(a) == sizeof(int) */
//	//printf("两者相等吗？    %s\n", sizeof(a) == sizeof(int) ? "是" : "否"); // 是
//
//
//
//
//	////代码1
//	//int a = 1;
//	//int b = 2;
//	//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	////c是多少？
//	//printf("%d", c);
//	//
//	////代码2
//	//if (a = b + 1, c = a / 2, b > 0)
//	//
//	//
//	////代码3
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0){
//	//	//业务处理
//	//	//...
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	////如果使用逗号表达式，改写：
//	//while (a = get_val(), count_val(a), a > 0){
//	//		//业务处理
//	//}
//
//
//
//	return 0;
//}