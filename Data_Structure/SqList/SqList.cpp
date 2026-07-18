#define _CRT_SECURE_NO_WARNINGS
/*
 * SqList.cpp - 顺序表（动态数组）的实现文件
 * 功能：实现 SqList.h 中声明的所有接口
 */

#include"SqList.h"

/*
 * 初始化顺序表
 * 1. 断言指针非空
 * 2. 动态分配初始容量为 4 的数组
 * 3. size 置 0，capacity 置 4
 */
void SqListInit(SqList* ps) {
	assert(ps != NULL);
	ps->arr = (SqDataType*)malloc(sizeof(SqDataType) * 4);
	if (ps->arr == NULL) {
		printf("SqListInit memory allocation failed\n");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}

/*
 * 销毁顺序表
 * 释放动态数组内存，将指针置NULL，size和capacity置0
 */
void SqListDestroy(SqList* ps) {
	assert(ps);
	free(ps->arr);       // 释放数组内存
	ps->arr = NULL;      // 防止野指针
	ps->size = ps->capacity = 0;
}

/*
 * 检查容量是否已满，若已满则扩容为原来的2倍
 * 使用 realloc 进行原地扩容或迁移到更大的内存块
 */
static void SqListCheckCapacity(SqList* ps) {
	if (ps->size < ps->capacity)
		return;  // 容量充足，无需扩容

	// 容量不足，扩容为原来的 2 倍
	int newCapacity = ps->capacity * 2;
	SqDataType* tmp = (SqDataType*)realloc(ps->arr, sizeof(SqDataType) * newCapacity);
	if (tmp == NULL) {
		printf("SqList realloc failed\n");
		exit(1);  // 内存分配失败，直接退出程序
	}
	ps->arr = tmp;           // 指向新的内存块
	ps->capacity = newCapacity;  // 更新容量
}

/*
 * 获取第 i 个位置的元素值
 * 时间复杂度：O(1)，随机访问
 */
SqDataType GetElem(SqList* ps, int i) {
	assert(ps);
	assert(i >= 0 && i < ps->size);  // 下标越界检查
	return ps->arr[i];
}

/*
 * 按值查找：遍历顺序表，返回第一个值为 x 的元素下标
 * 找不到返回 -1
 * 时间复杂度：O(n)
 */
int LocateElem(SqList* ps, SqDataType x) {
	assert(ps);
	for (int i = 0; i < ps->size; i++) {
		if (ps->arr[i] == x) {
			return i;  // 找到，返回下标
		}
	}
	return -1;  // 未找到
}

/*
 * 在第 i 个位置插入元素 x
 * 步骤：
 *   1. 检查容量，不足则扩容
 *   2. 从最后一个元素开始，将 i 及之后的元素逐个后移
 *   3. 在位置 i 放入新元素
 *   4. size 加 1
 * 时间复杂度：O(n)
 */
void SqListInsert(SqList* ps, int i, SqDataType x) {
	assert(ps);
	assert(i >= 0 && i <= ps->size);  // i 可以等于 size（尾部插入）

	SqListCheckCapacity(ps);  // 确保容量充足

	// 从后往前逐个后移，为新元素腾出位置
	for (int j = ps->size - 1; j >= i; j--) {
		ps->arr[j + 1] = ps->arr[j];
	}
	ps->arr[i] = x;  // 插入新元素
	++ps->size;       // 元素个数加 1
}

/*
 * 删除第 i 个元素，并返回被删除的值
 * 步骤：
 *   1. 保存待删除元素的值
 *   2. 从 i+1 开始，将后面的元素逐个前移
 *   3. size 减 1
 * 时间复杂度：O(n)
 */
SqDataType SqListDelete(SqList* ps, int i) {
	assert(ps);
	assert(i >= 0 && i < ps->size);  // 下标越界检查

	SqDataType val = ps->arr[i];  // 保存被删除的值
	// 从前往后逐个前移，覆盖被删除的位置
	for (int j = i; j < ps->size - 1; j++) {
		ps->arr[j] = ps->arr[j + 1];
	}
	--ps->size;  // 元素个数减 1
	return val;   // 返回被删除的值
}

/*
 * 打印顺序表所有元素（空格分隔）
 */
void SqListPrint(SqList* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

/*
 * 判断顺序表是否为空
 * size == 0 说明没有元素，返回 true
 */
bool EmptySqList(SqList* ps) {
	assert(ps);
	return ps->size == 0;
}

/*
 * 获取顺序表当前的有效元素个数
 */
int SqListSize(SqList* ps) {
	assert(ps);
	return ps->size;
}

/*
 * 尾部插入：在顺序表末尾添加元素
 * 直接调用 SqListInsert，插入位置为 size（末尾之后）
 */
void SqListPushBack(SqList* ps, SqDataType x) {
	SqListInsert(ps, ps->size, x);
}

/*
 * 头部插入：在顺序表头部添加元素
 * 直接调用 SqListInsert，插入位置为 0
 */
void SqListPushFront(SqList* ps, SqDataType x) {
	SqListInsert(ps, 0, x);
}

/*
 * 尾部删除：删除顺序表末尾元素
 * 直接将 size 减 1 即可（无需移动元素，O(1)）
 */
void SqListPopBack(SqList* ps) {
	assert(ps);
	assert(ps->size > 0);  // 空表不能删除
	--ps->size;
}

/*
 * 头部删除：删除顺序表头部元素
 * 调用 SqListDelete 删除下标为 0 的元素（需要移动元素，O(n)）
 */
void SqListPopFront(SqList* ps) {
	assert(ps);
	assert(ps->size > 0);  // 空表不能删除
	SqListDelete(ps, 0);
}
