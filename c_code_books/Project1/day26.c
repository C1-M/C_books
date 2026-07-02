#define _CRT_SECURE_NO_WARNINGS
//文件操作：程序文件和数据文件
// 
//数据组织形式，数据文件被分为：二进制文件和文本文件
#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中    
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//文件指针
//fopen 函数
//int main()
//{
//	//FILE* pf = fopen("./../../test.txt", "w");
//	//r - read
//	//w - write
//	//FILE* pf = fopen("D:\\zuomian\\github_code_clong\\c_code_books\\Project1\\test.txt", "r");
//	//FILE* pf = fopen("D:/zuomian/github_code_clong/c_code_books/Project1/test.txt", "r");//或者使用 /
//	FILE* pf = fopen("./test.txt", "r");// ./ 当前目录 ../ 上一级目录
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	//读文件
//
//
//	//关闭文件
//	fclose(pf);//fclose 解除关联区，缓存区
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	for (char ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	for (char ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, stdout);
//	}
//
//	return 0;
//}


//fgetc读取字符
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = fgetc(stdin)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	return 0;
//}



//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int c = fgetc(fp);
//        printf(" %d \n", c);
//        fputc(c, stdout); //使用 fputc 在标准输出流上打印字符
//    }
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//假设test.txt文件中存放abcdef
//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen\n");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int c = fgetc(fp);
//        if (c == EOF)
//        {
//            if (feof(fp))
//            {
//                printf("遇到文件末尾了\n");
//            }
//            else if (ferror(fp))
//            {
//                printf("读取发生了错误\n");
//            }
//        }
//        else
//        {
//            fputc(c, stdout); //使用fputc在标准输出流上打印字符
//        }
//    }
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//以写的形式打开文件后，再去读文件，就会发生错误
//int main()
//{
//    FILE* fp = fopen("test.txt", "w");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int c = fgetc(fp);//读文件
//    if (c == EOF)
//    {
//        if (feof(fp))
//            printf("遇到文件末尾了\n");
//        else if (ferror(fp))
//        {
//            printf("读文件发生了错误\n");
//        }
//    }
//    else
//    {
//        fputc(c, stdout); //使用fputc在标准输出流上打印字符
//    }
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}






