#define _CRT_SECURE_NO_WARNINGS

//题目描述

//是确定然而未知的，但是保证一定不小于该柜子存物品请求的格子编号的最大值。当然也有可能某些寄包柜中一个格子都没有。
//
//输入格式
//第一行 2 个整数 n 和 q，寄包柜个数和询问次数。
//接下来 q 个行，每行有若干个整数，表示一次操作。
//输出格式
//对于查询操作时，输出答案，以换行隔开。
// 
//输入
//5 4
//1 3 10000 118014
//1 1 1 1
//2 3 10000
//2 1 1
//
//输出
//118014
//1
//说明 / 提示
//upd 2022.7.26：新增加一组 Hack 数据。


 //#include <iostream>
 //#include <vector>
 //#include <unordered_map>
////#include<bits/stdc++.h>
//
//using namespace std;
//long long a[2005][2005];
//int main() {
//    int n, q;
//    cin >> n >> q;
//    for (int i = 0; i < q; i++) {
//        int op;
//        cin >> op;
//        if (op == 1) {
//            long long f, m, k;
//            cin >> f >> m >> k;
//            a[f][m] = k;
//        }
//        else {
//            long long x, s;
//            cin >> x >> s;
//            cout << a[x][s] << endl;
//        }
//    }
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include<bits/stdc++.h>
//
//int main() {
//    //int result, x = 5, a = 2, b = 3, c = 4, d = 6;
//    int result = 0;
//    int x = 5; 
//    int a = 2;
//    int b = 3; 
//    int c = 4;
//    int d = 6;
//
//    // 方式1：原生if else分支
//    if (x > 0) {
//        result = a + b;
//    }
//    else {
//        result = c * d;
//    }
//    std::cout << "if-else结果：" << result << std::endl;
//
//    // 方式2：三目运算符，和上方逻辑完全等价
//    int res_ternary = (x > 0) ? (a + b) : (c * d);
//    std::cout << "三目运算符结果：" << res_ternary << std::endl;
//
//    return 0;
//}
