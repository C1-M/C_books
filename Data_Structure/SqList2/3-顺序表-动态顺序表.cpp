#define _CRT_SECURE_NO_WARNINGS

//// 动态顺序表
// 
//// typedef是为了方便类型替换
//typedef int SqDataType;
//
//// 动态顺序表结构定义
//typedef struct SequenceList {
//	SqDataType* arr;			 //存储数据的静态数组
//	int size;					 //记录顺序表中已经存入的数据个数
//	int capacity;				 //动态数组的容量空间的大小
//}SqLinst;

//// 有些地方简化一下，也可以直接定义匿名结构体，再 typedef 一个名称，如下：
//typedef struct {
//	SqDataType* arr;			 //存储数据的静态数组
//	int size;					 //记录顺序表中已经存入的数据个数
//	int capacity;				 //动态数组的容量空间的大小
//}SqLinst;