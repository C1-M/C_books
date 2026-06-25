#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<assert.h>


// 字符函数和字符串函数
// 字符分类：
// 函数	    如果他的参数符合下列条件就返回真
//iscntrl	任何控制字符
//isspace	空白字符：空格 ' '，换页 '\f'，换行 '\n'，回车 '\r'，制表符 '\t' 或者垂直制表符 '\v'
//isdigit	十进制数字 '0' ~'9' 字符
//isxdigit	十六进制数字，包括所有十进制数字字符，小写字母 a~f，大写字母 A~F
//islower	小写字母 a~z
//isupper	大写字母 A~Z
//isalpha	字母 a~z 或 A~Z
//isalnum	字母或者数字，a~z, A~Z, 0~9
//ispunct	标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph	任何图形字符
//isprint	任何可打印字符，包括图形字符和空白字符
//
//

//isdigit	十进制数字 '0' ~'9' 字符
//int main()
//{
//	//int r = isdigit('9');//判断是否是十进制字符
//	int r = islower('A');//判断是否是小写字母
//
//	printf("%d\n", r);
//
//	return 0;
//}




//strlen：统计参数 str 指向的字符串的长度。统计的是字符串中'\0' 之前的字符的个数。
//int main()
//{
//	if (strlen("abc") - strlen("anbcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//strlen的模拟实现
//...



//strcpy
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "------------";
//	//arr2 = arr1;//err  - 数组名是一个常量地址
//	strcpy(arr2, arr1);//string copy
//	printf("%s\n", arr2);
//
//	return 0;
//}



//strcpy
//strcat
//strcmp

//strcat：字符串追加，把 source 指向的源字符串中的所有字符都追加到destination 指向的空间中。
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "woeld";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcat模拟实现
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//
//	//1. 找\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 数据的拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxxxx";//helloworld
//	char arr2[] = "world";
//	char* pr = my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", pr);
//
//	return 0;
//}


//strcmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "pdf";
//	int r = strcmp(arr1, arr2);
//	printf("%d\n", r);
//	return 0;
//}

//strcmp模拟实现

// 模拟实现 strcmp
//int my_strcmp(const char* s1, const char* s2)
//{
//    // 字符相等且未到字符串末尾时，两个指针同步后移
//    while (*s1 == *s2 && *s1 != '\0')
//    {
//        s1++;
//        s2++;
//    }
//    // 循环结束：要么字符不同，要么走到了字符串结尾
//    // 直接返回ASCII码差值，天然满足 正数/负数/0 的标准规则
//    return *s1 - *s2;
//}
//
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "pdf";
//
//    // 调用我们自己实现的版本
//    int r = my_strcmp(arr1, arr2);
//    printf("%d\n", r);
//    return 0;
//}


//strncat
//int main()
//{
//	char arr1[20] = "hello\0-------";
//	char arr2[] ="world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* str = strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	//printf("%s\n", str);
//	return 0;
//}




//char* strstr(const char* str1, const char* str2)
//{
//	char* cp = (char*)str1;
//	char* s1, * s2;
//	//特殊情况：str2是空字符串时，直接返回str1
//	if (!*str2)
//		return((char*)str1);
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && !(*s1 - *s2))
//			s1++, s2++;
//		if (!*s2)
//			return(cp); //返回第一次出现的起始
//		cp++;
//	}
//	return(NULL); //找不到则返回NULL
//}


//eernum
//int main()
//{
//
//	return 0;
//}
