#define _CRT_SECURE_NO_WARNINGS
#include "4-1-动态顺序表实现-接口函数的定义-SqList.h"

//销毁顺序表
void SqListDestroy(SqList* ps) {
	assert(ps);
	if (ps->arr) {
		free(ps->arr);
		ps->size = 0;
		ps->capacity = 0;
		ps->arr = NULL;
	}
}