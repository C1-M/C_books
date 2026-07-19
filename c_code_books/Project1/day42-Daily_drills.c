#define _CRT_SECURE_NO_WARNINGS

//17.求字符串长度
/*
写一个函数Strlen，可以求字符串长度，注：字符串的结束标志是\0 .
输入一个字符串（字符串长度小于等于30，中间不包含空格），使用Strlen函数可以求字符串的长
度，并返回。

测试1：
输入：abcdef
输出：6

测试2：
输入：abc defghi
输出：10
*/



//#include <stdio.h>
//int Strlen(char arr[]) {
//    int length = 0;
//    // 直接遍历直到遇到字符串结束符 '\0'
//    while (arr[length] != '\0') {
//        length++;
//    }
//    return length;
//}
//
//int main() {
//    char arr[31]; // 题目要求长度≤30，需31字节（含结束符'\0'）
//
//    // 读取整行输入（包括空格），最多30字符 + '\0'
//    fgets(arr, sizeof(arr), stdin);
//
//    // 手动移除 fgets 可能读入的换行符 '\n'
//    for (int i = 0; arr[i] != '\0'; i++) {
//        if (arr[i] == '\n') {
//            arr[i] = '\0'; // 替换为字符串结束符
//            break;
//        }
//    }
//
//    // 调用 Strlen 函数并输出结果
//    printf("%d", Strlen(arr));
//    return 0;
//}


//使用指针
//#include <stdio.h>
//int Strlen(char* str) {
//    char* p = str;  // 创建指针副本进行遍历
//    while (*p != '\0') {  // 直接解引用判断结束符
//        p++;  // 指针后移
//    }
//    return p - str;  // 指针相减得到长度
//}
//
//int main() {
//    char arr[31];  // 题目要求长度≤30，需31字节（含'\0'）
//
//    // 使用fgets读取整行（含空格），安全处理输入
//    if (fgets(arr, sizeof(arr), stdin) == NULL) {
//        return 1;  // 输入错误处理
//    }
//
//    // 移除fgets可能读入的换行符
//    char* newline = arr;
//    while (*newline != '\0') {
//        if (*newline == '\n') {
//            *newline = '\0';  // 直接修改指针指向位置
//            break;
//        }
//        newline++;
//    }
//
//    printf("%d", Strlen(arr));
//    return 0;
//}


//优优化
//#include <stdio.h>
//int Strlen(char* s) {
//    char* p = s;
//    while (*p++);
//    return p - s - 1;
//}
//
//int main() {
//    char s[31];
//    fgets(s, 31, stdin);
//    s[strcspn(s, "\n")] = 0;
//    printf("%d", Strlen(s));
//}