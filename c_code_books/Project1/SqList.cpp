#define _CRT_SECURE_NO_WARNINGS

#include"SqList.h"

//初始化顺序表
void SqListInit(SqList* ps){
	assert(ps != NULL);
	ps->arr = (SqDataType*)malloc(sizeof(SqDataType) * 4);
	if (ps->arr == NULL) {
		//申请失败，则退出
		printf("SqListInit内存空间申请失败\n");

		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}


void SqListDestroy(SqList* ps) {
	free(ps->arr);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

SqDataType GetElem(SqList* ps, int i) {
	assert(ps);

	return ps->arr[i];
}

int LocateElem(SqList* ps, SqDataType x) {
	assert(ps);
	
	for (int i = 0; i < ps->size; i++) {
		if (ps->arr[i] == x) {
			return i;
		}
	}

	return -1;
}


// 在顺序表的第i个位置插入元素x
void SqListInsert(SqList* ps, int i, SqDataType x) {
	assert(ps);
	assert(i<=ps->size);

	//挪动数据
	int j = ps->size - 1;
	while (j < i) {
		ps->arr[j + 1] = ps->arr[j];
		--j;
	}
	ps->arr[i] = x;
	++ps->size;
}

// 删除顺序表中第i个元素，并返回删除的值
SqDataType SqListDelete(SqList* ps, int i) {

	assert(ps);
	assert(i < ps->size && i >= 0);

	//挪动数据覆盖
	for (int j = i + 1; j < ps->size; ++j) {
		//ps->arr[j - 1] = ps - arr[j];
	}


}


// 打印顺序表中的元素
void SqListPrint(SqList* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

