#define _CRT_SECURE_NO_WARNINGS

#include "List.h"

// 从工程角度安全的写法是单独写一个申请结点的函数，方便检查malloc失败的情况
// 在考试或者oj中需要结点时可以直接malloc，不考虑那么多。
LNode* BuyListNode(int data) {

	// 不能创建一个LNode的结构体变量，因为局部变量出了作用域就销毁了
	// 所以这里用malloc从堆上动态申请结点，并检测是否申请成功
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (NULL == newNode) {
		printf("BuyListNode失败!!!\n");
		exit(-1);
	}

	// 申请成功后，对结点中的数据域和指针域进行初始化
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// 初始化链表
LNode* ListInit() {
	LNode* node = BuyListNode(-1);
	return node;
}
