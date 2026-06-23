#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <intrin.h> // 必需：提供 _ReturnAddress()

//// 函数4：最内层函数
//void func4(int param1, int param2) {
//    int local4_1 = 401, local4_2 = 402; // 局部变量
//
//    // 打印栈帧关键地址（按物理内存从高到低排序）
//    printf("=== Stack Frame: func4 ===\n");
//    printf("  Parameter 2 (param2=%d)  : %p\n", param2, (void*)&param2); // 先压栈（高地址）
//    printf("  Parameter 1 (param1=%d)  : %p\n", param1, (void*)&param1); // 后压栈（低地址）
//    printf("  Return Address           : %p\n", _ReturnAddress());       // func3 的返回地址
//    printf("  Local Var 2 (local4_2=%d): %p\n", local4_2, (void*)&local4_2);
//    printf("  Local Var 1 (local4_1=%d): %p\n", local4_1, (void*)&local4_1);
//    printf("\n");
//}
//
//// 函数3：调用 func4
//void func3(int param1, int param2) {
//    int local3_1 = 301, local3_2 = 302; // 局部变量
//
//    printf("=== Stack Frame: func3 ===\n");
//    printf("  Parameter 2 (param2=%d)  : %p\n", param2, (void*)&param2);
//    printf("  Parameter 1 (param1=%d)  : %p\n", param1, (void*)&param1);
//    printf("  Return Address           : %p\n", _ReturnAddress());       // func2 的返回地址
//    printf("  Local Var 2 (local3_2=%d): %p\n", local3_2, (void*)&local3_2);
//    printf("  Local Var 1 (local3_1=%d): %p\n", local3_1, (void*)&local3_1);
//    printf("\n");
//
//    func4(param1 + 10, param2 + 10); // 嵌套调用
//}
//
//// 函数2：调用 func3
//void func2(int param1, int param2) {
//    int local2_1 = 201, local2_2 = 202; // 局部变量
//
//    printf("=== Stack Frame: func2 ===\n");
//    printf("  Parameter 2 (param2=%d)  : %p\n", param2, (void*)&param2);
//    printf("  Parameter 1 (param1=%d)  : %p\n", param1, (void*)&param1);
//    printf("  Return Address           : %p\n", _ReturnAddress());       // main 的返回地址
//    printf("  Local Var 2 (local2_2=%d): %p\n", local2_2, (void*)&local2_2);
//    printf("  Local Var 1 (local2_1=%d): %p\n", local2_1, (void*)&local2_1);
//    printf("\n");
//
//    func3(param1 + 10, param2 + 10); // 嵌套调用
//}
//
//// 函数1：main（调用 func2）
//int main() {
//    int local1_1 = 101, local1_2 = 102; // main 的局部变量
//
//    printf("=== Stack Frame: main ===\n");
//    printf("  Local Var 2 (local1_2=%d): %p\n", local1_2, (void*)&local1_2);
//    printf("  Local Var 1 (local1_1=%d): %p\n", local1_1, (void*)&local1_1);
//    printf("  (main has no return address in user code)\n");
//    printf("\n");
//
//    func2(10, 20); // 启动嵌套调用
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//// 函数4：最内层函数
//void func4(int param1, int param2) 
//{
//    int local4_1 = 401; // 局部变量
//    int local4_2 = 402; // 局部变量
//}
//
//// 函数3：调用 func4
//void func3(int param1, int param2) 
//{
//    int local3_1 = 301; // 局部变量
//    int local3_2 = 302; // 局部变量
//    func4(param1 + 10, param2 + 10); // 嵌套调用
//}
//
//// 函数2：调用 func3
//void func2(int param1, int param2) 
//{
//    int local2_1 = 201; // 局部变量
//    int local2_2 = 202; // 局部变量
//    func3(param1 + 10, param2 + 10); // 嵌套调用
//}
//
//// 函数1：main（调用 func2）
//int main() 
//{
//    int local1_1 = 101; // main 的局部变量
//    int local1_2 = 102; // main 的局部变量
//    func2(10, 20); // 启动嵌套调用
//    return 0;
//}
