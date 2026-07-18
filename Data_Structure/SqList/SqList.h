#pragma once
/*
 * SqList.h - 顺序表（动态数组）的头文件
 * 功能：定义顺序表的结构体和所有操作接口
 * 说明：接口声明放在 .h 文件，具体实现放在 SqList.cpp
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

/* 数据类型定义，方便后续统一替换（如改为 double、char 等） */
typedef int SqDataType;

/*
 * 顺序表结构体（动态数组实现）
 * arr      : 指向动态分配的数组空间，用于存储数据
 * size     : 当前已存储的有效元素个数
 * capacity : 数组当前的总容量（可容纳的最大元素数）
 */
typedef struct
{
	SqDataType* arr;   // 存储数据的动态数组指针
	int size;          // 记录顺序表中已经存储的数据个数
	int capacity;      // 动态数组的最大容量
}SqList;

/* 初始化顺序表：分配初始内存（容量为4），size置0 */
void SqListInit(SqList* ps);

/* 销毁顺序表：释放内存，所有字段置0/NULL */
void SqListDestroy(SqList* ps);

/* 获取顺序表中下标为 i 的元素值（下标从0开始） */
SqDataType GetElem(SqList* ps, int i);

/* 查找第一个值为 x 的元素，返回其下标；不存在则返回 -1 */
int LocateElem(SqList* ps, SqDataType x);

/* 在顺序表的第 i 个位置插入元素 x（i 从0开始，可插入到尾部之后） */
void SqListInsert(SqList* ps, int i, SqDataType x);

/* 删除顺序表中第 i 个元素，返回被删除元素的值 */
SqDataType SqListDelete(SqList* ps, int i);

/* 打印顺序表中的所有元素（空格分隔） */
void SqListPrint(SqList* ps);

/* 判断顺序表是否为空：空返回 true，非空返回 false */
bool EmptySqList(SqList* ps);

/* 获取顺序表中有效元素的个数 */
int SqListSize(SqList* ps);

/* ===== 以下是基于 Insert/Delete 的便捷接口 ===== */

/* 尾部插入：在顺序表末尾添加元素 x */
void SqListPushBack(SqList* ps, SqDataType x);

/* 头部插入：在顺序表头部添加元素 x */
void SqListPushFront(SqList* ps, SqDataType x);

/* 尾部删除：删除顺序表末尾元素 */
void SqListPopBack(SqList* ps);

/* 头部删除：删除顺序表头部元素 */
void SqListPopFront(SqList* ps);
