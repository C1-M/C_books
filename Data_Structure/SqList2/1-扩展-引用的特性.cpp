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



//引用的做参数
//函数调用传值传参：将实参的值复制一份给形参，函数内对形参的修改不会影响实参。
//函数调用指针传参：传递实参的地址（指针），通过指针间接访问和修改实参。
//函数调用引用传参：形参是实参的别名，通过引用间接修改实参。
//指针传参和引用传参除了通过形参修改实参的作用，对于大对象传参还有减少拷贝提高效率的作用。
//指针和传参和引用传参在功能上是重叠的，一些场景用引用程序要简化方便一些。当然在C++中引
//用还有一些独特的功能，这个不是我们这里的重点就不在深入讲解了，如果大家以后学C++再去探索吧。

//#include<stdio.h>
//// 传值传参
//void Swap1(int rx, int ry) {
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//// 传指针传参
//void Swap2(int* rx, int* ry) {
//	int tmp = *rx;
//	*rx = *ry;
//	*ry = tmp;
//}
//// 传引用传参
//void Swap3(int& rx, int& ry) {
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
// 
//int main() {
//	int x = 0, y = 1;
//	printf("%d,%d\n", x, y);
// 
//	// 实参 x 和 y 传递给形参 rx 和 ry，rx 和 ry 是 x 和 y 的拷贝，
//	// 所以 rx 和 ry 的改变不影响 x 和 y，无法实现交换
//	Swap1(x, y);
//	printf("%d,%d\n\n", x, y);
//	printf("%d,%d\n", x, y);
// 
//	// 实参 x 和 y 的地址传递给形参 rx 和 ry，所以 *rx 就是 x，*ry 就是 y，
//	// 所以 Swap2 可以实现交换
//	Swap2(&x, &y);
//	printf("%d,%d\n\n", x, y);
//	printf("%d,%d\n", x, y);
// 
//	// 实参 x 和 y 传递给形参 rx 和 ry，所以 rx 就是 x 的别名，ry就是y的别名，
//	// 所以 Swap3 可以实现交换
//	Swap3(x, y);
//	printf("%d,%d\n\n", x, y);
//	return 0;
//}