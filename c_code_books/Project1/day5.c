#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <stdlib.h>   // 用于 rand()、srand()
#include <time.h>     // 用于 time() 随机数种子

// while 循环
//int main()
//{
//    int i = 0;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n != 0)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

// for 循环
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int n = 0;
//	int m = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//			num += i;
//			n++;
//		}
//		m++;
//	}
//	printf("%d\n", num);
//	printf("%d\n", n);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int n = 0;
//	int m = 0;
//	for (i = 0; i <= 100; i += 3)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//			num += i;
//			n++;
//		}
//		m++;
//	}
//	printf("%d\n", num);
//	printf("%d\n", n);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	// 初始化  判断  调整，这三个部分可以省略不写
//	// 判断部分如果被省略掉，就意味着判断恒成立，代码是有可能陷入死循环
//	for (;;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

// do-while 循环
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int c = 0;
//	do
//	{
//		i /= 10;
//		c++;
//	} while (i != 0);
//	printf("%d\n", c);
//	return 0;
//}

// break 和 continue 语句
// break ：永久的终止循环，只要 break 被执行，跳出循环继续往后执行。
// continue ：跳过本次循环中 后面的代码，在 for 循环和 while 循环中有所差异的。
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	for (i=1;i <= 10;i++)
//	{
//		
//		if (i == 5)
//			continue;
//		printf("%d ", i);// 1 2 3 4 6 7 8 9 10
//
//	}
//	return 0;
//}

//main()
//{
//	int i = 1;
//
//	for (i = 1; i <= 10; i++)
//	{
//
//		if (i == 5)
//			break;
//		printf("%d ", i);//1 2 3 4 
//
//	}
//	return 0;
//}

// 循环嵌套
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d 是素数\n", i);
//		}
//	}
//	return 0;
//}

//int main()  // 修正函数返回值类型
//{
//	int i = 0;
//	int j = 0;
//	// 遍历 100 ~ 200 所有数字
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数：从2开始试除
//		for (j = 2; j <= i - 1; j++)
//		{
//			// 能被整除，说明不是素数，跳出内层循环
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		// 内层循环正常走完（没触发break），说明j == i，i是素数
//		if (i == j)
//		{
//			printf("%d 是素数\n", i);  // 补上 %d 打印数字
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0, flag = 0;
//	// 标记位：flag=1 代表是素数，flag=0 代表不是
//
//	for (i = 100; i <= 200; i++)
//	{
//		flag = 1;  // 先默认当前数是素数
//		// 只循环到 i-1
//		for (j = 2; j <= i-1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;  // 能被整除，标记为非素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d 是素数\n", i);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0, j = 0, flag = 0;
//	// 标记位：flag=1 代表是素数，flag=0 代表不是
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		flag = 1;  // 先默认当前数是素数
//		// 只循环到 i-1
//		//sqrt(i)开平方
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;  // 能被整除，标记为非素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d 是素数\n", i);
//		}
//	}
//	return 0;
//}

// goto 语句
// 建议尽量不要使用 goto 语句，因为会打乱执行顺序
// break 在 for 循环中只能跳出一个循环，goto 能直接跳转（多层循环）到指定的循环
//int main()
//{
//	printf("haha\n");
//	goto ma;
//	printf("yoyo\n");
//	ma:
//	printf("hihi\n");
//	return 0;
//}

//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	printf("请注意，电脑 60s 即将关机，如果输入：'我是猪'就取消关机\n");
//	system("shutdown -s -t 60");
//again:
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("你很乖，给你取消关机\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	printf("请注意，电脑 60s 即将关机，如果输入：'我是猪'就取消关机\n");
//	system("shutdown -s -t 60");
//	scanf("%s", input);
//	while (1)
//	{
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("你很乖，给你取消关机\n");
//			break;
//		}
//	}
//	return 0;
//}


//打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int num = 0;
//	for (num = 3; num <= 100; num += 3)
//	{
//		if (0 == num % 3)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}

//将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a >= b && b >= c)
//		printf("%d %d %d", a, b, c);
//	else if (a >= c && c >= b)
//		printf("%d %d %d", a, c, b);
//	else if (b >= a && a >= c)
//		printf("%d %d %d", b, a, c);
//	else if (b >= c && c >= a)
//		printf("%d %d %d", b, c, a);
//	else if (c >= a && a >= b)
//		printf("%d %d %d", c, a, b);
//	else
//		printf("%d %d %d", c, b, a);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0, z = 0, c = 0;
//	scanf("%d %d %d", &m, &n, &z);
//
//	// 第一步：让 m 成为最大值
//	if (m < n)   // m 比 n 小，交换
//	{
//		c = m;
//		m = n;
//		n = c;
//	}
//	if (m < z)   // m 比 z 小，交换
//	{
//		c = m;
//		m = z;
//		z = c;
//	}
//
//	// 第二步：让 n 大于等于 z（确定中间值和最小值）
//	if (n < z)
//	{
//		c = n;
//		n = z;
//		z = c;
//	}
//
//	// 从大到小输出
//	printf("%d %d %d", m, n, z);
//	return 0;
//}

//int main()
//{
//	int arr[3], temp;
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//
//	// 冒泡排序：从大到小
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//		break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
//int main()
//{
//	int a = 0, b = 0, min = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a < b)
//	{
//		min = a;
//	}
//	else
//	{
//		min = b;
//	}
//
//	do
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	} while (min >= 1);
//
//	return 0;
//}

// 给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
//int main()
//{
//	int a = 0, b = 0, min = 0;
//	scanf("%d %d", &a, &b);
//
//	if (a < b ? (min = a) : (min = b))
//
//	do
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	} while (min >= 1);
//
//	return 0;
//}


// 猜数字游戏
//void mun()
//{
//	int b = 0;
//	int e = 5;
//	int c = 5;
//	int rt = rand() % 100 + 1; //生成1-100随机数
//	printf("===== 猜数字游戏开始 =====\n");
//	while (c > 0)       
//	{
//		printf("还有 %d 次机会，请输入 1-100 的数字：", c);
//		scanf("%d", &b);//输入放到循环内，使每次都能重新猜
//
//		if (b < 1 || b > 100)
//		{
//			printf("输入超出范围！请输入1~100之间的数\n");
//			continue; // 不扣除次数，重新输入
//		}
//
//		if (b < rt)
//		{
//			printf("猜小了\n");
//		}
//		else if (b > rt)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break; // 直接跳出循环
//		}
//		c--;
//	}
//
//	if (c == 0)
//	{
//		printf("%d次机会已用完，游戏结束！正确答案是：%d\n", e, rt);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));//设置随机数种子（时间戳），全局只执行一次，为保证每次猜数字的答案不同
//
//qw: 
//	printf("------------------\n");
//	printf("----1.进入游戏----\n");
//	printf("----2.退出游戏----\n");
//	printf("------------------\n");
//	printf("请选择数字1~2：");
//	scanf("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("进入游戏\n");
//		mun();
//		goto qw;
//	case 2:
//		printf("退出游戏\n");
//		break;
//	default:
//		printf("输入错误，请输入1~2的数字\n\n");
//		goto qw;
//	}
//	return 0;
//}