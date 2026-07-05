#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//    FILE* fp = fopen("test.txt", "w+");
//    if (fp == NULL)
//    {
//        perror("fopen for w+");
//        return 1;
//    }
//
//    //写abcdefghi到文件中
//    fputs("abcdefghi", fp);
//    //刷新缓冲区，保证数据写入文件
//    fflush(fp);
//    //要读取数据b字符，先定位文件指针
//    fseek(fp, 1, SEEK_SET);
//
//    int ch = fgetc(fp);//读取字符
//    printf("%c\n", ch); //b
//    //abcdefghi
//    
//    //在b的位置开始写入hello
//    fseek(fp, -1, SEEK_CUR);
//    //解释：因为前面读取一个字符后,文件指示器现在指向了c,需要从当前位置退回一个字符
//
//    fputs("hello", fp);
//    //ahelloghi
//    // 
//    //关闭文件
//    fclose(fp);
//    fp = NULL;
//
//    return 0;
//}


//声明来自外部的函数
//extern int Add(int, int);
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    printf("%d\n", c);
//
//    return 0;
//}


//int main()
//{
//    printf("%s\n", __FILE__);
//    printf("%d\n", __LINE__);
//    printf("%s\n", __DATE__);
//    printf("%s\n", __TIME__);
//    //printf("%d\n", __STDC__);
//    return 0;
//}



// #define M 10

// int main()
// {
//     int arr[M] = {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;

//     //循环输出数组的arr的内容
//     for(i = 0; i<M; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

//声明来自外部的函数
// extern int Add(int, int);

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = Add(a, b);
//     printf("%d\n", c);

//     return 0;
// }

// void test()
// {
//     printf("%s\n", __func__);
// }

// int main()
// {
//     printf("%s\n", __FILE__);
//     printf("%d\n", __LINE__);
//     printf("%s\n", __DATE__);
//     printf("%s\n", __TIME__);
//     printf("%d\n", __STDC__);
//     test();
//     return 0;
// }

// #define reg register 
// #define do_forever for(;;)




// int main()
// {
//     // register int num;//建议num放在寄存器中
//     // reg int num2;   
//     // do_forever;
//     int n = 0;
//     scanf("%d", &n);
//     switch(n)
//     {
//         case 1:
//         break;
//         case 2:
//         break;
//         case 3:
//         break;
//     }
//     return 0;
// }

// #define CASE break;case

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     switch(n)
//     {
//         case 1:
//         CASE 2:
//         CASE 3:
//     }
//     return 0;
// }

//
// #define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//                     __FILE__,\
//                     __LINE__ ,\
//                     __DATE__,\
//                     __TIME__ ) 

// int main()
// {
//     DEBUG_PRINT;

//     return 0;
// }

// #define MAX 100

// int main()
// {
//     int m = MAX;
//     printf("%d\n", MAX);
//     return 0;
// }

// #define SQUARE(x)  (x)*(x)

// int main()
// {
//     int a = 5;
//     int r = SQUARE(a + 2);
//     //int r = a + 2*a + 2;
//     //        5 + 10 + 2 = 17
//     printf("%d\n", r);

//     return 0;
// }


// #define DOUBLE(x)  ((x)+(x))

// int main()
// {
//     int a = 5;
//     int r = 3 * DOUBLE(a);
//     //int r = 3 * (a)+(a)
//     printf("%d\n", r);

//     return 0;
// }

// #define MAX(x, y)  ((x)>(y)?(x):(y))

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int m = MAX(a++, b++);
//     //int m = ((a++)>(b++)?(a++):(b++));
//     //
//     printf("m = %d\n", m);
//     printf("a = %d b = %d\n", a, b);

//     return 0;
// }

int Max(int x, int y)
{
    return x > y ? x : y;
}

// #define MAX(x, y)  ((x)>(y)?(x):(y))

// #define M 10

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int m = MAX(M, b++);
//     //int m = MAX(10, b++);
//     //int m =  ((10)>(b++)?(10):(b++))
//     //
//     printf("m = %d\n", m);
//     printf("a = %d b = %d\n", a, b);
//     printf("M = %d\n", M);
//     printf("MAX(a,b) = %d\n", M);
//     return 0;
// }


//#include <stdio.h>
//int main() {
//#ifdef __STDC_VERSION__
//    printf("当前 C 标准版本: %ld\n", __STDC_VERSION__);
//#else
//    printf("C89 或更早标准\n");
//#endif
//    printf("This function: %s\n", __func__);
//    printf("This file: %s\n", __FILE__);
//    printf("This line: %d\n", __LINE__);
//    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
//    printf("C Version: %ld\n", __STDC_VERSION__);
//    return 0;
//}



//int main() 
//{
//    printf("This function: %s\n", __func__);
//    printf("This file: %s\n", __FILE__);
//    printf("This line: %d\n", __LINE__);
//    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
//    printf("C Version: %ld\n", __STDC_VERSION__);
//}