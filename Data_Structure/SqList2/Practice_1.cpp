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
