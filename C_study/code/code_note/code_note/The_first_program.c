#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	printf("你好！C语言\n");
//	printf("你好！C语言\n");
//	printf("你好！C语言\n");
//	printf("你好！C语言\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%s\n", "x");
//	printf("%s\n", "\"");
//	printf("''''\n");
//	printf("%s\n", "''''");
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	//t -> 类似于 Tab 键
//	printf("c:\test\test.c");
//  printf("a\tqw\tdef\tqqqq\twwwww\tx");
//
//	return 0;
//}

//int main() {
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//printf("\nabc\ndef");
//	//printf(" ");
//	//printf("\n");
//	//printf(" ");
//	printf("\n");
//	printf(" ");
//	printf("A"); // 加一个可见字符
//	return 0;
//}

//1-100中3的倍数之和
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d ", sum);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	
//	char arr1[] = {"welcome to bit!!!!!!!!"};
//	char arr2[] = {"**********************"};
//	int left = 0;//左下标
//	int right = sizeof(arr1)/sizeof(arr1[0])-2;//右下标
//	
//	while (left <= right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	//Sleep(1000);//睡眠函数
//	//system("cls");//清理屏幕
//	left++;
//	right--;
//	}
//	//printf("%s", arr2);
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n",strlen("c:\test\121"));
//	return 0;
//}


//#include<stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("%d\n", num);
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%5d\n", 1234567);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int (a + b) = a / b;
//        int (a - b) = a % b;
//        printf("%d\n %d", a + b, a - b);
//
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//打印1-100之间所有3的倍数的数字
//#include <stdio.h>
//int main() {
//	int a = 0;
//	for (a = 1; a <= 100; a++) {
//		if (a % 3 == 0) {
//			printf("%d ", a);
//		}
//	}
//}


//将三个整数数按从大到小输出
//#include <stdio.h>
//int main() 
//{
//    int a = 3;
//    int b = 6;
//    int c = 2;
//    int t = 0;
//    if (a < b) 
//    {
//        t = a;
//        a = b;
//        b = t;
//    }
//    if (a < c) 
//    {
//        t = a;
//        a = c;
//        c = t;
//    }
//    if (b < c) 
//    {
//        t = b;
//        b = c;
//        c = t;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}


//#include<stdio.h>
//void set_arr(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = -1;
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	set_arr(arr, sz);
//
//	return 0;
//}


//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	//size_t len = strlen("abcdef");
//	//printf("%zu\n", len); //%zu和%zd使用方法一样，建议使用%zu
//	printf("%zu\n", strlen("abcdef")); //链式访问
//
//	return 0;
//}


//#include<stdio.h>
//int run_yesno(int b)
//{
//	if ((b % 4 == 0) && (b % 100 != 0) || (b % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (run_yesno(a))
//		printf("闰年");
//	else
//		printf("平年");
//	return 0;
//}




