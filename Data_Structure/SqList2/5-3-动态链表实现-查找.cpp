#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

// 获取链表中第一个数据等于x结点的地址，若不存在返回NULL指针
LNode* ListLocateElem (LNode* L, LDataType x) {
	// 哨兵位头指针不为空
	assert(L);
	LNode* cur = L->next;
	while (cur) {
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}

	return NULL;
}

// 返回链表中下标为i的结点
LNode*ListGetElem (LNode* L, int i) {
	// 哨兵位头指针不为空
	assert(L);
	assert(i >= 0);
	int j = 0;
	LNode* iNode = L->next;
	while (iNode != NULL && j < i) {
		++j;
		iNode = iNode->next;
	}

	return iNode;
}