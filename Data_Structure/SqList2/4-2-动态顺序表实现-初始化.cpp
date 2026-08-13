#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "4-1-动态顺序表实现-接口函数的定义-SqList.h"

//初始化顺序表
void SqListInit(SqList* ps) {
	assert(ps);
	ps->arr = (SqDataType*)malloc(sizeof(SqDataType) * 4);
	if (ps->arr == NULL) {
		// 申请失败，则退出
		printf("InitSqList: 内申请空间失败!!!\n");
		//exit(-1);
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
