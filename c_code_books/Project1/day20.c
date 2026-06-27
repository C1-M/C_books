#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<errno.h>
//#include <string.h> 
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功");
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}






//C语言内存函数

//memcpy：完成内存块拷贝，不关注内存是什么

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//
//	memcpy(arr2,arr1,20);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}















