#define _CRT_SECURE_NO_WARNINGS

#include "4-1-动态顺序表实现-接口函数的定义-SqList.h"

// 删除顺序表中第i个元素，并返回删除的值
SqDataType SqListDelete(SqList* ps, int i) {
	assert(ps);
	assert(i >= 0 && i < ps->size);
	SqDataType x = ps->arr[i];
	// 挪动数据覆盖
	for (int j = i + 1; j < ps->size; j++) {
		ps->arr[j - 1] = ps->arr[j];
	}
	ps->size--;
	return x;
}