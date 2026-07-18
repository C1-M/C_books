#define _CRT_SECURE_NO_WARNINGS
/*
 * test_sqList.c - 顺序表单元测试
 * 功能：对 SqList 的所有接口进行全面的自动化测试
 * 框架：基于 assert() 实现的轻量级测试框架
 * 编译：g++ -o test_sqList.exe test_sqList.c SqList.cpp
 * 运行：.\test_sqList.exe
 */

#include "SqList.h"

/* ==========================================
 *  轻量级测试框架
 *  提供 TEST、RUN_TEST、ASSERT、ASSERT_EQ 宏
 *  用于定义测试用例、运行测试、断言条件
 * ========================================== */

static int tests_run = 0;      // 已运行的测试总数
static int tests_passed = 0;   // 通过的测试数
static int tests_failed = 0;   // 失败的测试数

/* 定义一个测试函数 */
#define TEST(name) static void name()

/* 运行一个测试函数，自动打印测试名和结果 */
#define RUN_TEST(name) do { \
    printf("  %-40s", #name); \
    tests_run++; \
    int _prev_failed = tests_failed; \
    name(); \
    if (tests_failed == _prev_failed) { \
        tests_passed++; \
        printf("[PASS]\n"); \
    } \
} while(0)

/* 断言宏：条件不满足时标记失败并返回 */
#define ASSERT(cond) do { \
    if (!(cond)) { \
        tests_failed++; \
        printf("[FAIL]  %s:%d  %s\n", __FILE__, __LINE__, #cond); \
        return; \
    } \
} while(0)

/* 断言宏：判断两个值是否相等（需可转为 int） */
#define ASSERT_EQ(a, b) do { \
    if ((a) != (b)) { \
        tests_failed++; \
        printf("[FAIL]  %s:%d  %s == %d, expected %d\n", \
               __FILE__, __LINE__, #a, (int)(a), (int)(b)); \
        return; \
    } \
} while(0)

/* ==========================================
 *  测试用例：Init / Destroy（初始化/销毁）
 * ========================================== */

/* 测试初始化后顺序表状态正确：size=0，为空 */
TEST(test_init) {
    SqList sl;
    SqListInit(&sl);
    ASSERT_EQ(SqListSize(&sl), 0);   // 初始大小为0
    ASSERT(EmptySqList(&sl));         // 初始为空表
    SqListDestroy(&sl);
}

/* 测试销毁后所有字段归零/置空 */
TEST(test_destroy) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 1);
    SqListPushBack(&sl, 2);
    SqListDestroy(&sl);
    ASSERT(sl.arr == NULL);           // 指针已释放置空
    ASSERT_EQ(sl.size, 0);            // size 归零
    ASSERT_EQ(sl.capacity, 0);        // capacity 归零
}

/* ==========================================
 *  测试用例：PushBack / PushFront（尾插/头插）
 * ========================================== */

/* 测试尾部插入：依次在末尾追加元素 */
TEST(test_push_back) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    ASSERT_EQ(SqListSize(&sl), 3);
    ASSERT_EQ(GetElem(&sl, 0), 10);   // 第一个元素
    ASSERT_EQ(GetElem(&sl, 1), 20);   // 第二个元素
    ASSERT_EQ(GetElem(&sl, 2), 30);   // 第三个元素
    SqListDestroy(&sl);
}

/* 测试头部插入：依次在头部插入，后插入的在前面 */
TEST(test_push_front) {
    SqList sl;
    SqListInit(&sl);
    SqListPushFront(&sl, 10);
    SqListPushFront(&sl, 20);
    SqListPushFront(&sl, 30);
    ASSERT_EQ(SqListSize(&sl), 3);
    ASSERT_EQ(GetElem(&sl, 0), 30);   // 最后插入的在最前面
    ASSERT_EQ(GetElem(&sl, 1), 20);
    ASSERT_EQ(GetElem(&sl, 2), 10);   // 最先插入的在最后面
    SqListDestroy(&sl);
}

/* 测试混合插入：交替使用头插和尾插 */
TEST(test_push_back_and_front) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);    // [10]
    SqListPushFront(&sl, 5);    // [5, 10]
    SqListPushBack(&sl, 20);    // [5, 10, 20]
    SqListPushFront(&sl, 1);    // [1, 5, 10, 20]
    ASSERT_EQ(SqListSize(&sl), 4);
    ASSERT_EQ(GetElem(&sl, 0), 1);
    ASSERT_EQ(GetElem(&sl, 1), 5);
    ASSERT_EQ(GetElem(&sl, 2), 10);
    ASSERT_EQ(GetElem(&sl, 3), 20);
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：PopBack / PopFront（尾删/头删）
 * ========================================== */

/* 测试尾部删除：删除末尾元素 */
TEST(test_pop_back) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    SqListPopBack(&sl);              // 删除 30
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 10);
    ASSERT_EQ(GetElem(&sl, 1), 20);
    SqListDestroy(&sl);
}

/* 测试头部删除：删除首元素 */
TEST(test_pop_front) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    SqListPopFront(&sl);             // 删除 10
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 20);
    ASSERT_EQ(GetElem(&sl, 1), 30);
    SqListDestroy(&sl);
}

/* 测试连续删除直到表为空 */
TEST(test_pop_to_empty) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 1);
    SqListPushBack(&sl, 2);
    SqListPopBack(&sl);              // 删除 2
    SqListPopBack(&sl);              // 删除 1
    ASSERT(EmptySqList(&sl));         // 表应为空
    ASSERT_EQ(SqListSize(&sl), 0);
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Insert（指定位置插入）
 * ========================================== */

/* 测试在头部插入（位置 0） */
TEST(test_insert_at_head) {
    SqList sl;
    SqListInit(&sl);
    SqListInsert(&sl, 0, 10);        // [10]
    SqListInsert(&sl, 0, 20);        // [20, 10]
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 20);
    ASSERT_EQ(GetElem(&sl, 1), 10);
    SqListDestroy(&sl);
}

/* 测试在尾部插入（位置 = size） */
TEST(test_insert_at_tail) {
    SqList sl;
    SqListInit(&sl);
    SqListInsert(&sl, 0, 10);        // [10]
    SqListInsert(&sl, 1, 20);        // [10, 20]
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 10);
    ASSERT_EQ(GetElem(&sl, 1), 20);
    SqListDestroy(&sl);
}

/* 测试在中间位置插入 */
TEST(test_insert_at_middle) {
    SqList sl;
    SqListInit(&sl);
    SqListInsert(&sl, 0, 10);        // [10]
    SqListInsert(&sl, 1, 30);        // [10, 30]
    SqListInsert(&sl, 1, 20);        // [10, 20, 30] 在10和30之间插入20
    ASSERT_EQ(SqListSize(&sl), 3);
    ASSERT_EQ(GetElem(&sl, 0), 10);
    ASSERT_EQ(GetElem(&sl, 1), 20);
    ASSERT_EQ(GetElem(&sl, 2), 30);
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Delete（指定位置删除）
 * ========================================== */

/* 测试删除头部元素（位置 0） */
TEST(test_delete_head) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    SqDataType val = SqListDelete(&sl, 0);  // 删除 10
    ASSERT_EQ(val, 10);               // 返回值正确
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 20);
    ASSERT_EQ(GetElem(&sl, 1), 30);
    SqListDestroy(&sl);
}

/* 测试删除尾部元素 */
TEST(test_delete_tail) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    SqDataType val = SqListDelete(&sl, 2);  // 删除 30
    ASSERT_EQ(val, 30);
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 10);
    ASSERT_EQ(GetElem(&sl, 1), 20);
    SqListDestroy(&sl);
}

/* 测试删除中间元素 */
TEST(test_delete_middle) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    SqDataType val = SqListDelete(&sl, 1);  // 删除 20
    ASSERT_EQ(val, 20);
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 10);
    ASSERT_EQ(GetElem(&sl, 1), 30);
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：GetElem / LocateElem（取值/查找）
 * ========================================== */

/* 测试按下标获取元素值 */
TEST(test_get_elem) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 100);
    SqListPushBack(&sl, 200);
    SqListPushBack(&sl, 300);
    ASSERT_EQ(GetElem(&sl, 0), 100);
    ASSERT_EQ(GetElem(&sl, 1), 200);
    ASSERT_EQ(GetElem(&sl, 2), 300);
    SqListDestroy(&sl);
}

/* 测试按值查找：元素存在 */
TEST(test_locate_elem_found) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    ASSERT_EQ(LocateElem(&sl, 20), 1);  // 20 在下标1
    ASSERT_EQ(LocateElem(&sl, 30), 2);  // 30 在下标2
    ASSERT_EQ(LocateElem(&sl, 10), 0);  // 10 在下标0
    SqListDestroy(&sl);
}

/* 测试按值查找：元素不存在 */
TEST(test_locate_elem_not_found) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    ASSERT_EQ(LocateElem(&sl, 99), -1); // 99 不存在，返回 -1
    ASSERT_EQ(LocateElem(&sl, 0), -1);  // 0 也不存在
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Empty / Size（判空/求大小）
 * ========================================== */

/* 测试空表判断：初始化后为空，插入后非空，删除后又为空 */
TEST(test_empty) {
    SqList sl;
    SqListInit(&sl);
    ASSERT(EmptySqList(&sl));         // 初始为空
    SqListPushBack(&sl, 1);
    ASSERT(!EmptySqList(&sl));        // 插入后非空
    SqListPopBack(&sl);
    ASSERT(EmptySqList(&sl));         // 删除后又为空
    SqListDestroy(&sl);
}

/* 测试元素个数追踪：插入/删除后 size 正确变化 */
TEST(test_size) {
    SqList sl;
    SqListInit(&sl);
    ASSERT_EQ(SqListSize(&sl), 0);    // 初始为0
    SqListPushBack(&sl, 1);
    ASSERT_EQ(SqListSize(&sl), 1);    // 插入1个后为1
    SqListPushBack(&sl, 2);
    SqListPushBack(&sl, 3);
    ASSERT_EQ(SqListSize(&sl), 3);    // 插入3个后为3
    SqListPopFront(&sl);
    ASSERT_EQ(SqListSize(&sl), 2);    // 删除1个后为2
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Capacity / Large Data（容量扩展/大数据量）
 * ========================================== */

/* 测试容量自动扩展：插入超过初始容量(4)后自动扩容 */
TEST(test_capacity_expansion) {
    SqList sl;
    SqListInit(&sl);
    // 初始容量为 4，插入 10 个元素触发多次扩容
    for (int i = 0; i < 10; i++) {
        SqListPushBack(&sl, i * 10);
    }
    ASSERT_EQ(SqListSize(&sl), 10);
    ASSERT(sl.capacity >= 10);        // 容量已扩展
    // 验证所有数据正确
    for (int i = 0; i < 10; i++) {
        ASSERT_EQ(GetElem(&sl, i), i * 10);
    }
    SqListDestroy(&sl);
}

/* 测试大数据量：插入 1000 个元素并验证 */
TEST(test_large_data) {
    SqList sl;
    SqListInit(&sl);
    for (int i = 0; i < 1000; i++) {
        SqListPushBack(&sl, i);
    }
    ASSERT_EQ(SqListSize(&sl), 1000);
    ASSERT_EQ(GetElem(&sl, 0), 0);     // 首元素
    ASSERT_EQ(GetElem(&sl, 999), 999); // 末元素
    ASSERT_EQ(LocateElem(&sl, 500), 500); // 查找中间元素
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Mixed Operations（混合操作）
 * ========================================== */

/* 测试多种操作混合使用，验证数据一致性 */
TEST(test_mixed_operations) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 1);        // [1]
    SqListPushBack(&sl, 2);        // [1, 2]
    SqListPushFront(&sl, 0);       // [0, 1, 2]
    SqListInsert(&sl, 2, 99);      // [0, 1, 99, 2] 在位置2插入99
    SqListDelete(&sl, 0);          // [1, 99, 2] 删除头部0
    SqListPopBack(&sl);            // [1, 99] 删除尾部2
    ASSERT_EQ(SqListSize(&sl), 2);
    ASSERT_EQ(GetElem(&sl, 0), 1);
    ASSERT_EQ(GetElem(&sl, 1), 99);
    SqListDestroy(&sl);
}

/* ==========================================
 *  测试用例：Print（可视化验证）
 * ========================================== */

/* 测试打印输出（人工肉眼验证） */
TEST(test_print) {
    SqList sl;
    SqListInit(&sl);
    SqListPushBack(&sl, 10);
    SqListPushBack(&sl, 20);
    SqListPushBack(&sl, 30);
    printf("\n    Output: ");
    SqListPrint(&sl);              // 应输出: 10 20 30
    SqListDestroy(&sl);
}

/* ==========================================
 *  主函数：运行所有测试并输出汇总
 * ========================================== */
int main() {
    printf("========================================\n");
    printf("  SqList Unit Tests\n");
    printf("========================================\n\n");

    // --- 初始化/销毁 ---
    printf("[Init/Destroy]\n");
    RUN_TEST(test_init);
    RUN_TEST(test_destroy);

    // --- 尾插/头插 ---
    printf("\n[PushBack/PushFront]\n");
    RUN_TEST(test_push_back);
    RUN_TEST(test_push_front);
    RUN_TEST(test_push_back_and_front);

    // --- 尾删/头删 ---
    printf("\n[PopBack/PopFront]\n");
    RUN_TEST(test_pop_back);
    RUN_TEST(test_pop_front);
    RUN_TEST(test_pop_to_empty);

    // --- 指定位置插入 ---
    printf("\n[Insert]\n");
    RUN_TEST(test_insert_at_head);
    RUN_TEST(test_insert_at_tail);
    RUN_TEST(test_insert_at_middle);

    // --- 指定位置删除 ---
    printf("\n[Delete]\n");
    RUN_TEST(test_delete_head);
    RUN_TEST(test_delete_tail);
    RUN_TEST(test_delete_middle);

    // --- 按下标取值 / 按值查找 ---
    printf("\n[GetElem/LocateElem]\n");
    RUN_TEST(test_get_elem);
    RUN_TEST(test_locate_elem_found);
    RUN_TEST(test_locate_elem_not_found);

    // --- 判空 / 求大小 ---
    printf("\n[Empty/Size]\n");
    RUN_TEST(test_empty);
    RUN_TEST(test_size);

    // --- 容量扩展 / 大数据量 ---
    printf("\n[Capacity/Large Data]\n");
    RUN_TEST(test_capacity_expansion);
    RUN_TEST(test_large_data);

    // --- 混合操作 ---
    printf("\n[Mixed Operations]\n");
    RUN_TEST(test_mixed_operations);

    // --- 打印验证 ---
    printf("\n[Print (visual)]\n");
    RUN_TEST(test_print);

    // --- 汇总结果 ---
    printf("\n========================================\n");
    printf("  Results: %d/%d passed", tests_passed, tests_run);
    if (tests_failed > 0)
        printf(", %d FAILED", tests_failed);
    printf("\n========================================\n");

    return tests_failed > 0 ? 1 : 0;
}
