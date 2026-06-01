#define _CRT_SECURE_NO_WARNINGS 1

//C 语言是一门编译型计算机语言，必须通过编译器翻译——>链接器——>执行文件 (.c—>.obg—>.exe)
//VS2026 集成了 MSVC
//XCode(苹果电脑app)、DveC++ 集成了 gcc

//#include <stdio.h>
//
////int main函数最终会返回整型
////main 函数只有一个入口
//int main() 
//{
//	printf("Hello World");
//	return 0;
//}

//main函数的其他写法--在图书馆中发黄的书籍上才能看到--不建议
// viod main()
// {
// 
// }
//void 是无（空）的意思，main 函数执行结束后什么都不返回

//这种写法也行
//int main(viod) //是无（空）的意思，这里表示 main 函数是不需要参数的
//{
//	return 0；
//}

//main 函数其实是可以接受参数的
//但是main函数的参数是有意义和特殊用途的
//这里不讲
//int main(int argc, char* argv[], char* envp[]) 
//{
//	//..
//	return 0;
//}

//printf 是一个库函数
//pritnf("hello");//""括起来的是一个字符串
//pritnf("%c",'q');//''括起来的是一个字符
//pritnf("%d",123);
//pritnf("%f",3.5);//%f 是用来打印小数的，打印是默认小数点后6位
//这里的%d,%c等是占位符，会背后面的值替换。（后期课程再介绍）


//#include<stdio.h>
//stdio.h 
//standard - 标准
//input    - 输入
//output   - 输出
//.h       - 头文件
//标准输入输出的头文件


//什么是库函数？
//为了不再重复实现代码，使程序员的开发效率更高，这些函数组成了一个函数库，被称为标准函数


//关键字
//...

//ASCII 编码
//...
//'0' 字符是 48
//0 数字是 0


//C语言中的特殊知识：
//#include<stdio.h>
//int main() {
//	char arr1[] = { "abcd\n" };
//	char arr2[] = { 'a','b','c','d','\0'};
//	printf("%s", arr1);
//	printf("%s", arr2);
//	return 0;
//}





