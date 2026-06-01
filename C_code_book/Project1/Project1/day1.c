//C语言是一门编译型计算机语言

//stdio.h 是头文件（库函数包含在头文件中）
//std -- standard
//i -- input 输入
//o -- output 输出
#include <stdio.h>

////main 函数是程序的入口，也被叫做：主函数。一个项目只能有一个 main 函数
////int 前面表示返回整数
//int main() 
//{
//	printf("hello C");
//	printf("hello C");
//	printf("hello C");
//	printf("hello C");
//	printf("hello C");
//	printf("hello C");
//
//	//return 返回一个 整数 0
//	return 0;
//}

////int 返回类型
////main 函数名
//int main()//函数头
//{
// //printf 是一个 库函数
// //库函数：C语言标准规定的一组函数
//	printf("hello C");//在屏幕上的信息打印。
//	return 0;
//}//函数体

//在C语言中默认返回0表示正常返回，返回非0表示异常


//int main()
//{
//	printf("%d\n", 100);	// %d - 以十进制的形式，打印 整数
//	printf("%c\n", 'X');	// %c - 打印 字符
//	printf("%f\n", 3.14);	// %f - 打印 小数
//	printf("%s\n","abcdef");// %s - 打印 字符串
//	printf("abcdef");
//
//	return 0;
//}


// C语言有一批保留的名字的符号
// 比如：int、if、return，这些符号被称为 保留字 或者 关键字。
// 关键字 不能自己创建


// 字符 和 ASCII 编码
// 在键盘上可以敲出字符，如：a,q,@,#等，这些符号都被称为 字符
// C语言中 字符 都是用单引号括起来的，如：'a','b','@'。

// ASCII 编码中 需要掌握的
// 字符 A-Z 的 ASCII 码值从 65-90
// 字符 a-z 的 ASCII 码值从 97-122
// 对应的大小写字符（a和A）的 ASCII 码值的差值是 32
// 数字字符 0-9 的 ASCII 码值从 48-57
// 0 - 数字0 - 0
// '0' - 字符0 48
// 换行 \n 的 ASCII 码值是：10
// 在这些字符中 ASCII 码值从 0-31 这 32 个字符是不可打印字符，无法打印在屏幕上观察

////打印 ASCII 码值
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 32;i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'V');
//	printf("%c\n", 86);
//	printf("%c\n", 'V' + 32);//打印小写的 v
//	printf("%c\n", 86 + 32);//打印小写的 v
//	return 0;
//}


// char 字符类型
// int 整型
// 数组 - 可以存放一组类型相同的数据
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	printf("%s\n", arr1); //输出：abc
//	printf("%s\n", arr2); //输出：abc??????????? 乱码
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};// '\0'是字符串的结束标志
//
//	printf("%s\n", arr1); //输出：abc
//	printf("%s\n", arr2); //输出：abc
//
//	return 0;
//}


// 转义字符
