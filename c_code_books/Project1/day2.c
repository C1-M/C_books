// 转义字符
// \? ：在书写连续多个，防止被连续解析成三字母词，现在的编译器无法复现（这是早期的）
// \' ：用于表示字符常量'
// \" ：用于表示字符串内部的双引号
// \\ ：用于表述一个反斜杠，防止它被解释为一个转义序列符
// \a ：警报，这会使得终端发出警报声或出现闪烁，或者两者同时发生
// \b ：退格符，光标回退一个字符，但不删除字符
// \f ：换页符
// \n ：换行符
// \r ：回车符，光标移到同一行的开头
// \t ：制表符，光标移到下一个水平制表位，通常是下一个4或者8的倍数(类似于Tab键)
// \v ：垂直分隔符，光标移动到下一个垂直制表位，通常是下一行的同一列

// \ddd ：d d d 表示1-3个八进制的数字。 如：\130  表示字符 X  （将ddd数字转换为八进制表示的数或者其他）
// \xdd ：x d d 表示2个十六进制数字。   如：\x30  表示字符 0  （将dd数字转换为十六进制表示的数或者其他）
// \0 ：null字符，代表没有内容，\0 就是 \ddd 这一类转义字符的一种，用于字符串的结束标志，其ASCII码值是0


//#include<stdio.h>

//void main()
//{
//	//printf("(are you ok\?\?)");
//
//	//printf("%c", '\'');
//
//	//printf("%s\n", "abcde");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("%s\n", "c:\test\16\data.txt");
//	//printf("%s\n", "c:\\test\\16\\data.txt");
//
//	//printf("\a");
//
//	//printf("abcdefde\b\bwq");
//
//	//printf("abc\ndef");
//
//	//printf("abcdef\rxrrr");
//
//	//printf("a\tbc\tdef\tooo\tw\t1234567\t9");
//
//	//printf("%c\n", 'X');
//	//printf("%c\n", '\130');
//
//	//printf("%c\n", '0');
//	//printf("%c\n", 'x30');
//
//	return 0;
//}

//#include <string.h>//使用了 strlen 要添加头文件
//int main()
//{
//	//string length
//	int len = strlen("abc");
//	//a b c \0
//	//strlen 函数统计的是字符串中\0之前的字符个数，不包含\0
//	printf("%d\n", len);
//
//
//	return 0;
//}


//空语句：一个分号就是一条语句
//int main() {
//	;//空语句
//	return 0;
// 
//}

//表达式语句：表达式后加上分号
//int main() {
//	int a = 25;
//	int b = 0;
//	b = a + 4;//表达式语句
//
//	return 0;
//}

//函数调用语句：函数调用的适合也会加上分号
//int Add(int x, int y) 
//{
//	return x + y;
//}
//int main() 
//{
//	printf("haha\n");//函数调用语句
//	int tet = Add(2,3);//函数调用语句
//	printf("%d", tet);
//
//	return 0;
//}

//复合语句：就是代码块，成对括号中的代码就构成一个代码块，也被成为复合语句
//void print(int arr[], int sz)//函数的大括号中的代码也构成复合语句
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)//for 循环的循环体的大括号中的就是复合语句
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


// 控制语句：控制程序的执行流程，以实现程序的各种方式（C语言支持三种结构：顺序结构、选择结构、循环结构），它们由特定的语句定义符组成，C语言有9种控制语句
// 可以分成以下三类：
//·条件判断语句也叫分支语句：if语句、swich语句
//·循环执行语句：do while语句、while语句、for语句
//·转向语句：break语句、goto语句、continue语句、return语句


//注释1（“//”）：是对代码的说明，是给程序员自己看的，或者其他程序员看
//注释2（/**/）：这是C语言的早期注释形式。一次注释多行，但不支持嵌套
//int main()
//{
//	printf("123");/*这也是注释*/
//	/*
//	这是注释
//	1
//	2
//	*/
//
//	return 0;
//}


// 数据类型：C语言提供了丰富的数据类型来描述生活中的各种数据

// 字符型（char）：character，在C语言中使用char表示字符类型。
// [signed] char //有符号
// unsigned char //无符号

// 整型：integer，C语言中用 int 表示整型
// 短整型：short [int]
// 整型：int
// 长整型：long [int]
// 更长整型(c99引入)：long long [int]

//浮点型
//float
//double
//long double

//布尔值（c99引入）：表示真/假的值 _Bool(包含头文件 #include<stdbool.h>)
//#include <stdbool.h>
//int main()
//{
//	_Bool falng = true;
//	if(falng)
//		printf("he");
//	
//	return 0;
//}

//或者使用bool
//#include <stdbool.h>
//int main()
//{
//	bool falng = true;
//	if (falng)
//		printf("he");
//
//	return 0;
//}

// sizeof 的使用：
// ·【sizeof()】 能打印出()的字节长度，1字节 == 8bit
// ·【sizeof 表达式】 不参与运算
// sizeof 计算的结果要打印的话，使用%zu打印

//int main() 
//{
//	printf("%zu\n", sizeof(int));
//	return 0;
//}

//int main()
//{
//	short s = 12;
//	int b = 0;
//	printf("%zu\n", sizeof(s = b + 1));//不参与运算
//	printf("%d\n", s);
//	return 0;
//}


// signed 和 unsignde
// int == signed int
// 但是char不确定是有符号还是无符号，可能是signed char，也可能unsigned int
// ASCII 码值是整数，所以字符类型属于整型家族
// limits.h 文件中说明了整型类型的取值范围
// float.h 这个头文件中说明浮点类型的取值范围


//变量

