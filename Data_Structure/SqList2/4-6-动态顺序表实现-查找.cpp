#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "4-1-动态顺序表实现-接口函数的定义-SqList.h"

//顺序表有两种查找操作，位序查找和按值查找。

//位序查找函数原型： SqDataType GetElem(SqList* ps, int i) 第i个位置元素随机访
//问，在i满? 0 <= i < s.size 时(不满?则报错)，直接返回顺序表第i个元素即可。

// 返回顺序表中第i个元素的值
SqDataType GetElem(SqList* ps, int i) {
	assert(ps);
	assert(i >= 0 && i < ps->size);
	return ps->arr[i];
}


//按值查找函数原型： int LocateElem(SqList* ps, SqDataType x) 从前往后逐个查
//找，找到第?个相等的就返回其下标，否则返回 - 1。

// 返回第?个等于x的数据元素的位序，若不存在返回-1
int LocateElem(SqList* ps, SqDataType x) {
	assert(ps);
	for (int i = 0; i < ps->size; ++i) {
		if (ps->arr[i] == x)
			return i;
	}
	return -1;
}