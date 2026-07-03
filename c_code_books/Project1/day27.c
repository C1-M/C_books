#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//fprintf

//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { "zhangsan", 20, 95.5f };
//
//    FILE* fp = fopen("test.txt", "w");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fprintf(fp, "名字:%s\n年龄:%d\n成绩:%.2f\n", s.name, s.age, s.score);
//
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//fscanf

//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { 0 };
//
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    //scanf("%s %d %f", s.name, &(s.age), &(s.score));
//    fscanf(fp, "名字:%s 年龄:%d 成绩:%f", s.name, &(s.age), &(s.score));
//    fprintf(stdout, "名字:%s 年龄:%d 成绩:%.2f", s.name, s.age, s.score);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    /*  struct Stu s = { "zhangsan", 20, 95.5f };
//      char arr1[30] = { 0 };
//      sprintf(arr1, "%s %d %.2f", s.name, s.age, s.score);
//
//      printf("%s\n", arr1);*/
//
//    int num = 12345;
//    char str_num[10] = {0};
//    sprintf(str_num, "%d", num);
//    printf("%s\n", str_num);
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { "zhangsan", 20, 95.5f };
//    char arr1[30] = { 0 };
//    sprintf(arr1, "%s %d %.2f", s.name, s.age, s.score);
//    printf("%s\n", arr1);
//
//    //从arr1中解析出一个结构体数据
//    struct Stu t = {0};
//    sscanf(arr1, "%s %d %f", t.name, &(t.age), &(t.score));
//    fprintf(stdout, "%s %d %.2f\n", t.name, t.age, t.score);
//
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { "zhangsan", 20, 95.5f };
//
//    FILE* fp = fopen("test.txt", "wb");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fwrite(&s, sizeof(struct Stu), 1, fp);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    int age;
//    float score;
//};
//
//int main()
//{
//    struct Stu s = { 0 };
//
//    FILE* fp = fopen("test.txt", "rb");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    fread(&s, sizeof(struct Stu), 1, fp);
//    printf("%s %d %.2f\n", s.name, s.age, s.score);
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    
//    int c = fgetc(fp);
//    fputc(c, stdout); //a
//    //定位文件指针
//    //fseek(fp, 5, SEEK_SET);
//    //fseek(fp, 4, SEEK_CUR);
//    fseek(fp, -4, SEEK_END);
//
//    c = fgetc(fp);
//    fputc(c, stdout);//f
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}


//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    
//    int c = fgetc(fp);
//    fputc(c, stdout); //a
//    int pos = ftell(fp);//1
//
//    //定位文件指针
//    fseek(fp, 4, SEEK_CUR);
//    c = fgetc(fp);
//    fputc(c, stdout);//f
//
//    fseek(fp, pos, SEEK_SET);
//    c = fgetc(fp);
//    fputc(c, stdout);//b
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}



//int main()
//{
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    int c = fgetc(fp);
//    fputc(c, stdout); //a
//    int pos = ftell(fp);//1
//
//    //定位文件指针
//    fseek(fp, 4, SEEK_CUR);
//    c = fgetc(fp);
//    fputc(c, stdout);//f
//
//    fseek(fp, pos, SEEK_SET);
//    c = fgetc(fp);
//    fputc(c, stdout);//b
//
//    rewind(fp);//回到起始位置
//    c = fgetc(fp);//
//    fputc(c, stdout);//a
//
//    //不再使用文件时，需要关闭文件
//    fclose(fp);
//    fp = NULL; //将指针置为NULL,避免成为野指针。
//    return 0;
//}



//#include <windows.h>
////VS2022 WIN11环境测试
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    fputs("abcdefg", pf);//先将代码放在输出缓冲区
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    //Sleep(10000);
//    printf("刷新缓冲区\n");
//    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//    //注：fflush 在高版本的VS上不能使用了
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    //Sleep(10000);
//
//    fclose(pf);
//    //注：fclose在关闭文件的时候，也会刷新缓冲区
//    pf = NULL;
//
//    return 0;
//}

