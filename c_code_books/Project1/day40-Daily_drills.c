#define _CRT_SECURE_NO_WARNINGS

//14.字符转换
//输入一个字符串，将字符串中大写字母全部转为小写字母，小写字母转成大写字母，其他字符保持不变。
//注：字符串的长度小于等于30，其中字符串中包含空格。

//方法一：
//#include <stdio.h>
//int main() {
//    char str[31]; // 题目要求长度≤30，预留1位给字符串结束符'\0'
//
//    // 读取整行输入（包含空格）
//    fgets(str, sizeof(str), stdin);
//
//    // 移除fgets可能读入的换行符'\n'
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] == '\n') {
//            str[i] = '\0';
//            break;
//        }
//    }
//
//    // 遍历转换字符
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] >= 'A' && str[i] <= 'Z') {
//            // 大写转小写：ASCII码差值为32
//            str[i] = str[i] + 32;
//        }
//        else if (str[i] >= 'a' && str[i] <= 'z') {
//            // 小写转大写
//            str[i] = str[i] - 32;
//        }
//        // 非字母字符保持不变
//    }
//
//    printf("%s\n", str);
//    return 0;
//}



//优化：
//#include <stdio.h>
//int main() {
//    char s[31];
//    fgets(s, 31, stdin);
//    for (int i = 0; s[i]; i++) {
//        if (s[i] == '\n') s[i] = 0;
//        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
//        else if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
//    }
//    puts(s);
//    return 0;
//}



//方法二：使用库函数
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char buf[31] = { 0 };
//	//输入字符串
//	scanf("%[^\n]s", buf);
//	int i = 0;
//	while (buf[i])
//	{
//		//判断当前字符是否为小写字母
//		if (islower(buf[i]))
//			buf[i] = toupper(buf[i]);
//		//判读那当前字符是否为大写字母
//		else if (isupper(buf[i]))
//			buf[i] = tolower(buf[i]);
//		i++;
//	}
//	printf("%s\n", buf);
//	return 0;
//}


//两个整数的交换
//#include <stdio.h>
////传入两个整型指针参数，进行交换
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//将需要交换值的两个整数变量的地址作为参数传递给函数，进行交换
//	Swap(&a, &b);
//	//输出
//	printf("%d %d\n", a, b);
//	return 0;
//}


//优化：
//#include <stdio.h>
//int main() {
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    a ^= b ^= a ^= b;  // 单行异或交换
//    printf("%d %d", a, b);
//    return 0;
//}