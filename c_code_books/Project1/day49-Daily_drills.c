#define _CRT_SECURE_NO_WARNINGS

//给你两个整数 num1 和 num2，返回这两个整数的和。
//#include<stdio.h>
//int main(int num1,int num2) {
//	scanf("%d %d", &num1, &num2);
//	printf("%d", num1 + num2);
//	//return num1+num2;
//}



//小A 和 小B 在玩猜数字。小B 每次从 1, 2, 3 中随机选择一个，小A 每次也从 1, 2, 3 中选择一个猜。
//他们一共进行三次这个游戏，请返回 小A 猜对了几次？
/*
示例 1：
输入：guess = [1,2,3], answer = [1,2,3]
输出：3
解释：小A 每次都猜对了。

示例 2：
输入：guess = [2,2,3], answer = [3,2,1]
输出：1
解释：小A 只猜对了第二次。
*/

//#include<stdio.h>
//int main() {
//    int guess[3] = { 1,2,3 };
//    int answer[3] = { 3,2,3 };
//    int i = 0;
//    int y = 3;
//    while (y--) {
//        if (guess[y] == answer[y]) {
//            i++;
//        }
//    }
//    printf("%d", i);
//    return 0;
//}