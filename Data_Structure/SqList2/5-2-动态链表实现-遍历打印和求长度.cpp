#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

void ListPrint(LNode* L) {
	// 哨兵位头指针不为空
	assert(L);
	printf("头结点->");
	// cur是current的缩写，current是当前的意思
	// L是指针哨兵位头结点的指针，这个结构体的next是第一个结点的地址，cur指向第一个结点
	LNode* cur = L->next;

	// 循环遍历链表，打印每个结点的值，当cur为空则单链表遍历结束
	while (cur) {
		printf("%d->", cur->data);
		// 当前结点的next存储下一个结点的地址
		cur = cur->next;

		// 结合存储结构思考一下为什么不能通过++cur，让cur迭代到下一个结点？
	}
	printf("NULL\n");
}

int ListSize(LNode* L) {
	// 哨兵位头指针不为空
	assert(L);

	// 注意头结点值域不存储有效元素，不能将头结点计算在内
	int size = 0;
	LNode* cur = L->next;
	while (cur) {
		size++;
		cur = cur->next;
	}

	return size;
}