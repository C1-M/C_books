#define _CRT_SECURE_NO_WARNINGS

//19.逆序字符串
//输入一个字符串，写一个函数将一个字符串的内容逆序过来。

/*
测试1：
输入：abcdef
输出：fedcba

测试2：
输入：abcdefg
输出：gfedcba
*/

//#include <stdio.h>
//#include <string.h>
//// 将字符串原地逆序
//void reverseString(char str[]) {
//    int length = strlen(str);  // 获取字符串长度
//    // 交换首尾字符，直到中间位置
//    for (int i = 0; i < length / 2; i++) {
//        char temp = str[i];
//        str[i] = str[length - 1 - i];  // 交换首尾字符
//        str[length - 1 - i] = temp;
//    }
//}
//
//int main() {
//    char input[100];  // 定义足够大的缓冲区
//
//    // 读取输入字符串
//    scanf("%s", input);
//
//    // 调用逆序函数
//    reverseString(input);
//
//    // 输出结果
//    printf("%s\n", input);
//
//    return 0;
//}



//优优化
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char s[100], * l = s, * r = s + strlen(gets(s)) - 1;
//    while (l < r) {
//        char t = *l;
//        *l++ = *r;
//        *r-- = t;
//    }
//    puts(s);
//}