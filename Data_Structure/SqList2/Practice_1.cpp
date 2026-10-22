#define _CRT_SECURE_NO_WARNINGS
#include"4-1-动态顺序表实现-接口函数的定义-SqList.h"

//静态数组（static array）
//typedef int data_type;
//#define Array_length_definition 10
//
//typedef struct {
//	data_type arr[Array_length_definition];
//	int size;
//}static_array;


//动态数组（dynamic array）
typedef int data_type;

typedef struct {
	data_type* arr;
	int size;
	int expansion_space;
}dynamic_array;


//动态初始化数组（Dynamically initializing array）
void Dynamically_initializing_array(dynamic_array* ps) {
	assert(ps);
	ps->arr = (data_type*)malloc(sizeof(data_type) * 4);
	
	if (ps->arr == NULL) {
		printf("内存空间申请失败\n");
		return;
	}
	
	ps->size = 0;
	ps->expansion_space = 0;
}


//销毁顺序表
void destroy_list(dynamic_array* ps) {
	assert(ps);
	if (ps->arr != 0) {
		free(ps->arr);
		ps->size = 0;
		ps->expansion_space = 0;
		ps->arr = NULL;
	}
}


//插入

//测试是否能正常扩容
//int main(){
//	int* ptr1 = (int*)malloc(16);
//	printf("%p\n", ptr1);
//	// ptr2和ptr1地址一样，就是原地扩容
//	// ptr2和ptr1地址不一样，就是异地扩容
//	// 一般情况下，realloc扩容空间小一些就是原地扩容
//	// 比如下面的程序一般都是原地扩容(当然也可能是异地，这个跟具体环境有关)
//	// 比如你扩大一点，变成320，一般都是异地扩容了
//	int* ptr2 = (int*)realloc(ptr1, 32);
//	printf("%p\n", ptr2);
//	return 0;
//}

void SqListInsert(SqList* ps, int i, SqDataType x) {
	assert(ps); // 1. 断言指针不为空，防止非法访问
	// 2. 检查插入位置 i 的合法性
	assert(i >= 0 && i <= ps->size);

	// 3. 检查容量，如果满了就扩容
	if (ps->size == ps->capacity) {
		// 使用 realloc 扩容，通常扩大为原来的 2 倍
		SqDataType* tmp = (SqDataType*)realloc(ps->arr, sizeof(SqDataType) * ps->capacity * 2);
		if (tmp == NULL) { // 必须检查内存是否申请成功
			printf("SqListInsert: 内存申请空间失败!!!\n");
			return;
		}
		ps->arr = tmp;      // 更新数组指针
		ps->capacity *= 2;  // 更新容量记录
	}

	// 4. 挪动数据（核心步骤）
	// 从最后一个元素开始，依次向后移动一位，直到腾出第 i 个位置
	// 注意：代码中 i 被视为下标（因为循环条件是 j >= i - 1，且最后赋值给 arr[i]）
	for (int j = ps->size - 1; j >= i - 1; j--) {
		ps->arr[j + 1] = ps->arr[j];
	}

	// 5. 插入新元素
	ps->arr[i] = x;
	ps->size++; // 元素个数加 1
}