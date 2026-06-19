#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 指针 1

//内存和地址
//内存单元的编号 == 地址 == 指针
//一个字节的空间就有一个编号（地址/指针）
//一个字节32个比特位-4个字节
// 编号/编址并不是存起来，而是通过硬件设计完成的

//指针变量和地址
//CPU和内存是使用“线”链接起来的
//地址总线（今天关注）、控制总线、数据总线

// & 取地址操作符

//int main()
//{
//	int a = 10;
//
//	//&a; 取地址操作符，取a的地址
//	//printf("%p\n", &a);
//
//	int* p = &a;//p就是指针变量，就是用来存放地址的
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	
//	// * 表示是一个指针变量
//	int* p = &a;
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int* p = &a;
//	
//	printf("%d\n", *p);//*是解引用操作符，
//	//*p的意思是通过p里存放地址，找到p指向的对象，也就是a，所以*p就是a
//
//	*p = 10;
//	printf("%d\n", *p);
//
//	return 0;
//}


//指针变量的大小
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* ph = &ch;
//
//	return 0;
//}


//int main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
////X64 表示64位环境（64个bit位），编译出的程序是64位程序，指针变量的大小是8个字节
////X86 表示32位环境（32个bit位），编译出的程序是64位程序，指针变量的大小是4个字节
//	
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;//一次操作几个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//
//	*p = 0;//一次操作1个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	char* ph = &a;
//
//	printf("%p\n", p1);		//0000004EB935F694
//	printf("%p\n", p1+1);	//0000004EB935F698
//	printf("%p\n", ph);		//0000004EB935F694
//	printf("%p\n", ph+1);	//0000004EB935F695
//
//	return 0;
//}



//指针运算

//指针 +- 整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));// 1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);// 1 2 3 4 5 6 7 8 9 10
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p--;
//		printf("%d ", *p);// 10 9 8 7 6 5 4 3 2 1
//		
//	}
//	return 0;
//}


//指针 - 指针：得到的是指针之间的元素个数
//前提是指向的是同一个空间
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char ch[7];
//	&arr[8] - &ch[5];//err 错误的写法
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//[ a b c d e f \0]
//	size_t len = strlen(arr);//统计 \0 之前的字符个数
//	printf("%zu\n", len);
//	return 0;
//}

//size_t stemy_strlen(char* p)
//{
//	char* start = p;
//	while (*p != '\0')//也可以写成 while (*p)
//		p++;
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//[ a b c d e f \0]
//	size_t len = strlen(arr);//统计 \0 之前的字符个数
//	printf("%zu\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	while (p < &arr[10])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//const 修饰指针
//const 是常属性指针 - 不能被改变
//int main()
//{
//	//常变量 - 具有常属性的变量（不能被修改了）骨子里还是一个变量
//	//const int n = 10;
//	//n = 100;
//
//	//const int n = 10;//C99语言之前，这个n不能放在数组指定的大小
//	//int arr[n];
//	//arr[0] = 1;
//
//	const int n = 10;
//
//	int* p = &n;
//	*p = 100;
//
//	printf("%d\n", n);
//
//	return 0;
//}

//const 修饰指针变量
// 
//放在*的左边：const修饰的指针变量不能通过指针变量修改它指向的内容，但是指针变量的指向是可以修改的 
// *p = 0; √  
// p = &m; ×
// 
//放在*的右边：const修饰的指针变量本身，指针变量的指向是不能修改的，但是指针指向的内容，是可以通过指针来改变的
// *p = 0; √  
// p = &m; ×
// 
//int main()
//{
//	const int n = 10;
//	const int* p = &n;
//	//*p = 100;//NO
//	int m = 100;
//	p = &m;
//
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;
//
//	int* const p = &n;
//	*p = 100;
//	int m = 100;
//	//p = &m;//NO
//
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	 int n = 10;
//
//	const int* const p = &n;//错误写法
//	//*p = 100;//NO
//	int m = 100;
//	//p = &m;//NO
//
//	printf("%d\n", n);
//
//	return 0;
//}


//野指针：指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//指针指向的内容不属于当前程序
//int main()
//{
//	//int a = 10;
//	//int* p = &a;//初始化
//
//	int* p;
//	*p = 20;//就是野指针
//
//	return 0;
//}

//int g_a;
////全局变量不主动初始化的情况下，编译器会默认 0
//int main()
//{
//	int num;
//	//局部变量不初始化的，里面的指的是不可预测的，可能是随机值
//	printf("%d\n", g_a);
//	printf("%d\n", num);
//	return 0;
//}

//指针越界访问
//...

//指针指向的空间释放了
//...

//如何规避指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p2 = NULL;
//
//	return 0;
//}

//小心指针越界

//指针变量不使用及时 NULL

//assert 断言
//#define NDEBUG //加上后能关掉断言（不触发 assert() 函数）
//#include<assert.h>
//int main()
//{
//	int* p = NULL;
//
//	assert(p != NULL);
//
//	//if (p != NULL)
//	//{
//	//	//..
//	//}
//	
//	return 0;
//}

//指针的使用和传址调用

//计数器的方式：
//size_t my_len(const char *p)
//{
//	size_t count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_len(arr);//数组名的首元素的地址arr == &arr[0]
//	printf("%zu\n", len);
//	return 0;
//}

//传址调用和
//void swap(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//
//	//int c = a;
//	//a = b;
//	//b = c;
//	swap(a, b);
//
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//修复后，使用指针
//void swap(int *p1, int *p2)
//{
//	int z = *p1;
//	*p1 = *p2;
//	*p2 = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//
//	//int c = a;
//	//a = b;
//	//b = c;
//	swap(&a, &b);
//
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}



//深入理解指针

//数组名理解
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组名是数组首元素的地址
//	printf("&arr[0] = %p\n", &arr[0]);  //00000088649DFBF8 
//	printf("arr     = %p\n", arr);      //00000088649DFBF8 
//	printf("*arr    = %d\n", *arr);     //1
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%zu\n", sizeof(arr));//40 每个字符4个字节 10 个字符 4 * 10 = 40
//
//	printf("&arr[0]   = %p\n", &arr[0]); 
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);  
//
//	printf("arr       = %p\n", arr);     
//	printf("arr+1     = %p\n", arr+1);    
//
//	printf("&arr      = %p\n", &arr);     
//	printf("&arr+1    = %p\n", &arr+1); // 跳过一个数组 40 个字节。&取出的是数组的整个地址  
//
//	return 0;
//}


//使用指针访问数组
//int main()
//{
//	int arr[10] = { 0 };
//	//给数组赋值为 1-10
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		 *p = i+1;
//		 p++;
//	}
//	//打印
//	p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//给数组赋值为 1-10
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	//打印
//	p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		printf("%d ", i[arr]);//可以，不推荐这样写
//	}
//	//arr[i] == *(arr+i) == *(p+i)
//	//i[arr] == *(i+arr)
//	//[] 是操作符
//	//3+5 == 5+3
//	return 0;
//}



//一维数组传参的本质
//void test(int arr[10])//本质是一个指针：int* arr
//{
//	//不能使用参数部分的数组
//	//            8               4
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//
//	test(arr);//就是首元素的地址 ==> &arr[0]
//
//	return 0;
//}


//void test(int arr[10], int sz)//本质是一个指针：int* arr
//{
//	int i = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//
//	test(arr, sz1);//就是首元素的地址 ==> &arr[0]
//
//	return 0;
//}


//冒泡排序
// 打印数组函数
void print_arr(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);  // 逐个打印数组元素
    }
    printf("\n");  // 打印完成后换行，优化输出格式
}

// 冒泡排序核心函数（升序）
// 必须传入数组大小sz：数组传参时会退化为指针，函数内部无法计算数组长度
void bubble_sort(int arr[], int sz)
{
    int i = 0;
    // 外层循环：控制排序趟数，n个元素最多需要n-1趟
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 0;  // 优化标记：0表示本趟未发生任何交换
        // 内层循环：控制每趟比较的次数
        // 每趟结束后，最大的元素已"冒泡"到末尾，因此下一趟少比较i次
        for (int j = 0; j < sz - 1 - i; j++)
        {
            // 升序：如果前一个元素 > 后一个元素，交换两者
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;  // 标记本趟发生了交换
            }
        }
        // 【核心优化】如果本趟没有任何交换，说明数组已经完全有序，直接退出循环
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = { 9,1,7,6,3,4,5,2,8,0 };
    // 计算数组元素个数（仅在数组定义的作用域内有效）
    int sz = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, sz);

    // 打印排序后的数组
    print_arr(arr, sz);

    return 0;
}
