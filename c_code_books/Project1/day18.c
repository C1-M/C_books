#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h> //isdigit
#include<string.h>

//isdigit
//int main()
//{
//	int r = isdigit('8');
//	printf("%d\n", r);
//	return 0;
//}


//islower
//int main()
//{
//	char arr[] = "I am a Student!";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		//if(arr[i]>='a' && arr[i] <= 'z')
//		{
//			arr[i] -= 32;
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int r = tolower('X');
//	printf("%c\n", r);
//	putchar(r);//打印小写
//
//	return 0;
//}

//int main()
//{
//	int r = toupper('x');
//	printf("%c\n", r);
//	putchar(r);//打印大写
//
//	return 0;
//}


//int main()
//{
//	
//	int r = getchar(); //相当于：scanf("%c", &r);
//	putchar(r);        //相当于：printf("%c\n", r);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "I am a Student!";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		printf("%c", arr[i]);
//
//		i++;
//	}
//	return 0;
//}



//strlen
//int main()
//{
//	//         3             6
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	
//	return 0;
//}
// 
//int main()
//{
//	//         3             6
//	if (strlen("abc") > strlen("abcdef"))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	
//	return 0;
//}



//strlen的模拟实现

//大事化小：
//my_strlen("abcd")
//1 + my_strlen("bcd")
//    1 + my_strlen("cd")
//        1 + my_strlen("d")
//            1 + my_strlen("")
//                0
//

//size_t my_strlen(const char* s)
//{
//	if (*s != '\0')
//		return 1 + my_strlen(s + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	size_t len = my_strlen("abcd");
//	printf("%zu\n", len);
//
//	return 0;
//}



//strcpy
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "------------";
//	//arr2 = arr1;//err  -数组名是一个常量地址
//	strcpy(arr2, arr1);//string copy
//	printf("%s\n", arr2);
//
//	return 0;
//}



#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; //\0解决了
//
//	return ret;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//
////void my_strcpy(char* dest, char* src)
////{
////	while (*dest++ = *src++)
////	{
////		;
////	}
////}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "------------";
//	char* pr = my_strcpy(arr2, arr1);//string copy
//
//	printf("%s\n", arr2);
//	printf("%s\n", pr);
//
//	return 0;
//}
