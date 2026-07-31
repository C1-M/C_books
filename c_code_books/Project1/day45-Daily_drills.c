#define _CRT_SECURE_NO_WARNINGS

//判断回文字符串
//输入一个字符串，判断这个字符串是否是回文字符串（字符串的长度小于等于30，字符串不包含空
//格），如果是回文字符串输出Yes，如果不是回文字符串输出No。
/*
测试1：
输入：abcdef
输出：No

测试2：
输入：abccba
输出：Yes

测试3：
输入：abcba
输出：Yes

测试4：
输入：a
输出：Yes
*/

//#include<stdio.h>
//int main() {
//	char leteer_lite[31] = { 0 };
//	scanf("%s", leteer_lite);
//	//printf("%s", leteer_lite);
//
//	int sz = sizeof(leteer_lite) / sizeof(leteer_lite[0]);
//	int is_palindrome = 1;
//
//	for (int i = 0; i <= sz / 2; i++) {
//		if (leteer_lite != (sz - 1 - i)) {
//			is_palindrome = 1;
//			break;
//		}
//	}
//
//	//printf("%d", sz);
//	if (is_palindrome == 1) {
//		printf("Yes");
//	}
//	else {
//		printf("No");
//	}
//	return 0;
//}

//修改后：
//#include <stdio.h>
//#include <string.h> // 必须包含此头文件
//
//int main() {
//    char leteer_lite[31] = { 0 };
//    scanf("%s", leteer_lite);
//
//    int len = strlen(leteer_lite); // 获取实际字符串长度
//    int is_palindrome = 1;
//
//    for (int i = 0; i < len / 2; i++) {
//        if (leteer_lite[i] != leteer_lite[len - 1 - i]) {
//            is_palindrome = 0; 
//            break;
//        }
//    }
//
//    if (is_palindrome) {
//        printf("Yes");
//    }
//    else {
//        printf("No");
//    }
//    return 0;
//}




//可带你重写
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char str[31]; // 足够存储30字符+结束符'\0'
//
//    // 读取单个字符串
//    scanf("%s", str);
//
//    int len = strlen(str);
//    int is_palindrome = 1; // 默认是回文
//
//    //printf("%d", len);
//
//     //检查是否回文：比较首尾字符
//    for (int i = 0; i < len / 2; i++) {
//        if (str[i] != str[len - 1 - i]) {
//            is_palindrome = 0; // 发现不匹配
//            break;
//        }
//    }
//
//    // 输出结果
//    if (is_palindrome) {
//        printf("Yes");
//    }
//    else {
//        printf("No");
//    }
//
//    return 0;
//}


//最简且优化：
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char s[31];
//    scanf("%s", s);
//    int n = strlen(s);
//    for (int i = 0; i < n / 2; i++)
//        if (s[i] != s[n - 1 - i]) {
//            puts("No");
//            return 0;
//        }
//    puts("Yes");
//    return 0;
//}

