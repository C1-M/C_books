#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 什么是变量？C语言中把经常变化的值称为 变量，不变的值称为 常量。
// 变量创建的语法形式是这样：
// -----------------
// |  int   | age; |
// -----------------
// |数据类型| 变量 |
// -----------------
// 
// 变量的命名规则：
// ·由字母（大小写）、数字、下划线组成
// ·长度不能超63个字符
// ·变量名中区分大小写
// ·变量名不能使用关键字
//int main()
//{
//	int it;//整型变量
//	char ch;//字符变量
//	float fl;//浮点型变量，单精度浮点型
//	double dou;//浮点型变量，双精度浮点型
//	return 0;
//}

// 初始化：变量创建时给个初始值
//int main()
//{
//	int age = 18;//初始化：变量创建时给个初始值
//	float weight = 6.30f;
//	float score = 55.3f;
//	char ch = 'w';
//	double weight = 48.0;
//	unsigned int height = 100;
//	return 0;
//}

// 变量分类：全局变量、局部变量
//
////全局变量 - 社会上的自行车
//int num1 = 100;
//
//int main()
//{
//	int num1= 20;//局部变量 - 校园内的自行车
//	printf("num1 = %d\n", num1);
//
//	return 0;
//}
// 当全局变量和局部变量的变量名一致，一起使用时，局部变量优先
// 尽量使用局部变量，全局变量不可控

// 全局变量和局部变量在内存中存储在哪里？
// 一般我们学习C语言的时候，我们会关注内存中的三个区域：栈区、堆区、静态区
// 栈区：局部变量存放在内存的栈区
// 静态区：全局变量是存放在内存的静态区
// 堆区：堆区是用来动态内存管理的（后期会介绍）


//算术运算符 +、-、*、/、%
//这些操作符都是双⽬操作符（操作符也被叫做：运算符，只是不同的翻译，意思是⼀样的）
//int main()
//{
//	int a = 26;
//	int b = 12;
//	printf("%d\n", a + b);
//	printf("%d\n", 7 + 3);
//
//	printf("%d\n", a - b);
//	printf("%d\n", 7 - 3);
//
//	printf("%d\n", a * b);
//	printf("%d\n", 7 * 3);
//
//	printf("%d\n", a / b);
//	printf("%d\n", 7 / 3);
//
//	printf("%d\n", a % b);
//	printf("%d\n", 7 % 3);
//
//	return 0;
//}

// + 和 - 用来完成加法和减法
// + 和 - 都是有两个操作数，位于操作符两端的就是它们的操作数，这种操作符也叫双目操作符
//int main()
//{
//	int a = 12 + 34;
//	int b = 23 - 22;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	int x = 34;
//	int y = 45;
//	printf("x + y = %d\n", x + y);
//	printf("x - y = %d\n", x - y);
//	return 0;
//}

// * 用来完成乘法
//int main()
//{
//	int num = 5;
//	printf("%d", num * num);
//	return 0;
//}

// / 用来完成除法
// 如果int和double进行运算，那么int会转换为double后再进行运算
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x); // 输出 1.00000
//	printf("%d\n", y); // 输出 1
//	return 0;
//}
/*
上述示例中，尽管变量x的类型是float（浮点数），但是6/4得到的结果是1，⽽不是1.5
原因就在于C语言里面的整数除法是整除，只会返回整数部分，丢弃⼩数部分
*/

//如果希望得到浮点数的结果，两个运算数必须至少有⼀个浮点数，这时C语言就会进⾏浮点数除法
//int main()
//{
//	float x = 6 / 4.0;
//	printf("%f\n", x); //输出 1.50000
//	return 0;
//}

//注意：这个例子
//int main()
//{
//	int score = 5;
//	score = (score / 20) * 100;
//	printf("%d",score);
//	return 0;
//}
/*
上⾯的代码，你可能觉得经过运算，score会等于25，但是实际上score等于0。
这是因为score/20是整除，会得到⼀个整数值0，所以乘以100后得到的也是0。
为了得到预想的结果，可以将除数20改成20.0，让整除变成浮点数除法。
*/
//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d", score);
//	return 0;
//}

// % 表⽰求模(余)运算，即返回两个整数相除的余值。这个运算符只能用于整数，不能用于浮点数
//int main()
//{
//	printf("%d\n", 6 / 4);// 输出 1
//	printf("%d\n", 6 % 4);// 输出 2
//	return 0;
//}

// 负数求模的规则是，结果的正负号由第一个运算数的正负号决定。
//int main()
//{
//	printf("%d\n", 11 % -5); // 输出 1
//	printf("%d\n", -11 % -5); // 输出 -1
//	printf("%d\n", -11 % 5); // 输出 -1
//	return 0;
//}
// 上面示例中，第一个运算数的正负号（11 或-11）决定了结果的正负号

// 赋值操作符： = 和复合赋值
// 在变量创建的时候给一个初始值叫初始化，在变量创建好后，再给一个值，这叫赋值。
//int main()
//{
//	int a = 0;//初始化
//	a = 44;//赋值，这里使用的就是赋值操作符
//	printf("%d", a);//输出 44
//	return 0;
//}
//赋值操作符 = 是一个随时可以给变量赋值的操作符。

// 连续赋值
//int main() 
//{
//	int c = 9;
//	int b = 0;
//	int a = b = 5 + c;//这就是连续赋值，从右往左赋值
//	// 类似于：
//	// b = 5 + c;
//	// a = b;
//	printf("%d", a);
//	return 0;
//}


// 复合赋值
//int main()
//{
//	int a = 3;
//	//a = a + 7;
//	//printf("%d\n", a);
//	//可以写成：
//	a += 7;//复合赋值
//	//
//	// 还有其他复合赋值
//	//a -= 7;//复合赋值
//	//a *= 7;//复合赋值
//	//a /= 7;//复合赋值
//	//a %= 7;//复合赋值
//	printf("%d\n", a);
// 
//	return 0;
//}


// ++、--、+（正）、-（负）都是单目操作符
//int main()
//{
//	int a = 100;
//	//a = a + 1;
//	//a += 1;
//	//a++;
//	//++a;
//	//以上四种都是 a 自增 1
//
//	printf("%d\n", a);
//
//	return 0;
//}

// 后置++、前置++
int main()
{
	int a = 3;
	int b = a++;
	/*
	b = 3;
	b = a + 1;
	*/
	

	int b = ++a;
	b = a + 1;
	b = 4;

	return 0;
}









//int main()
//{
//	int a = 10;
//	//a = a + 1;
//	//a += 1;
//	//a++;
//	//++a;
//	//以上四种写法都是a，自增了1
//
//	printf("a = %d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;
//	//b = a, a = a+1;
//	//后置++:  先使用，再+1
//
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//10
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	//a=a+1, b=a
//	//前置++: 先+1，再使用
//	//
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a;
//	//前置--: 先-1，再使用
//	//
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//9
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;
//	//后置--: 先使用，再-1
//	//
//	printf("a = %d\n", a);//9
//	printf("b = %d\n", b);//10
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	printf("%d\n", (++a) + (++a) + (++a));//题目就是错误的
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = +a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = +a;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	//int   double
//	//4     8
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	printf("hello\nworld\n");
//	printf("hehe");
//	return 0;
//}

//
//int main()
//{
//	//printf("there are 3 apples\n");
//	//printf("there are 5 apples\n");
//	//printf("there are 10 apples\n");
//
//	//printf("there are %d apples\n", 10);
//	//printf("%s will come tonight\n", "zhangsan");
//	//printf("%s will come tonight\n", "lisi");
//
//	/*printf("zhangsan says, it's 10 o'clock\n");
//	printf("%s says, it's %d o'clock\n", "zhangsan", 10);
//	printf("%s says, it's %d o'clock\n", "lisi", 8);*/
//
//	return 0;
//}

//int main()
//{
//	/*printf("%e\n", 123.45);
//	printf("%E\n", 123.45);*/
//
//	printf("%%%d\n", 50);
//
//
//	return 0;
//}

//
//int main()
//{
//	//printf("%d\n", 123);
//	//printf("%5d\n", 123);
//	//printf("%5d\n", 123456);
//
//	//printf("%-5d", 123);
//	////123  hehe
//	//printf("hehe\n");
//
//	printf("%f\n", 12.3);
//	printf("%12f\n", 12.3);
//	return 0;
//}

//
//int main()
//{
//	printf("%+d\n", +10);
//	printf("%+d\n", -10);
//
//	return 0;
//}


//int main()
//{
//	//printf("%f\n", 1.237);
//	//printf("%.3f\n", 1.237);
//	//printf("%.2f\n", 1.237);
//	//printf("%.1f\n", 1.237);
//
//	printf("%10.2f\n", 12.34);
//	printf("%*.*f\n", 6, 2, 12.34);
//
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	scanf("%d", &score);//& -- 取地址操作符，取出scode的地址
//	printf("成绩是:%d\n", score);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0;
//	float y = 0;
//	
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//
//	printf("i = %d\n", i);
//	printf("j = %d\n", j);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}



//int main()
//{
//	int x;
//	float y;
//
//	// 用户输入 "    -13.45e12# 0"
//	//scanf("%d", &x);
//	//printf("%d\n", x);
//
//	//scanf("%f", &y);
//	//printf("%f\n", y);
//
//	scanf("%d%f", &x, &y);
//	printf("%d %f\n", x, y);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//
//	int r = scanf("%d %d %f", &a, &b, &f);
//	
//	printf("a=%d b=%d f=%f\n", a, b, f);
//	
//	printf("r = %d\n", r);
//
//	return 0;
//}

//在算法竞赛中使用的非常频繁

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//刷题和算法竞赛中非常常见
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//多组输入的场景法
//	while (scanf("%d %d", &a, &b) == 2)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//多组输入的场景法
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	
//	return 0;
//}


//int main()
//{
//	// 读取只包含字母的字符串
//	//char str1[100];
//	//scanf("%[a-zA-Z]", str1);  // 只接受a-z和A-Z
//	//printf("%s\n", str1);
//
//	char str1[100];
//	scanf("%[0-9]", str1);  // 0-9数字字符
//	printf("%s\n", str1);
//
//	return 0;
//}


//int main()
//{
//	//int num = 0;
//	//char c = 0;
//	//scanf("%d", &num);
//	//printf("%d\n", num);
//
//	//scanf("%c", &c);
//	//printf("-----%c----\n", c);
//
//	//scanf(" %c", &c);//%c前面的空格表示忽略开始的字符
//	//printf("-----%c----\n", c);
//
//	//char arr[100];//abc\0
//	//scanf("%s", arr);//arr是数组名，数组名本来就是地址，所以这里不取地址了
//	//printf("%s\n", arr);
//
//
//	char arr[10];//abc\0
//	scanf("%9s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


// 赋值忽略符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//    int c = 0;
//	scanf("%d%c%d%c%d", &a, &b, &c);//%c在这里忽略字符，可以自己运行体验
//	printf("%d%d%d", a, b, c);
//	return 0;
//}




