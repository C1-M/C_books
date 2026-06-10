#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

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



