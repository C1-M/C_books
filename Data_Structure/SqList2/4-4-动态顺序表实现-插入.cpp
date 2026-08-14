#define _CRT_SECURE_NO_WARNINGS

#include "4-1-动态顺序表实现-接口函数的定义-SqList.h"

int main()
{
	int* ptr1 = (int*)malloc(16);
	printf("%p\n", ptr1);
	// ptr2和ptr1地址一样，就是原地扩容
	// ptr2和ptr1地址不一样，就是异地扩容
	// 一般情况下，realloc扩容空间小一些就是原地扩容
	// 比如下面的程序一般都是原地扩容(当然也可能是异地，这个跟具体环境有关)
	// 比如你扩大一点，变成320，一般都是异地扩容了
	int* ptr2 = (int*)realloc(ptr1, 32);
	printf("%p\n", ptr2);
	return 0;
}


// 在顺序表的第i个位置插入元素data
void SqListInsert(SqList* ps, int i, SqDataType x) {
	assert(ps);
	// 这两种检查方式都可以，看你的需求
	assert(i >= 0 && i <= ps->size);
	/*
	if (i < 0 || i > ps->size) {
	printf("请在[0, %d]范围内插入\n", ps->size);
	return;
	}*/
	if (ps->size == ps->capacity) {
		// 满了扩容
		SqDataType* tmp = (SqDataType*)realloc(ps->arr, sizeof(SqDataType) *
			ps->capacity * 2);
		if (tmp == NULL) {
			printf("SqListInsert: 内存申请空间失败!!!\n");
			return;
		}
		ps->arr = tmp;
		ps->capacity *= 2;
	}
	// 挪动数据
	// 注意：j是下标，i是位序
	for (int j = ps->size - 1; j >= i - 1; j--) {
		ps->arr[j + 1] = ps->arr[j];
	}
	ps->arr[i] = x;
	ps->size++;
}