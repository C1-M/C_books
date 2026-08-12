#define _CRT_SECURE_NO_WARNINGS

//// 静态顺序表
//
//// typedef是为了方便类型替换
//// typedef 原类型名 新类型名(别名);
//typedef int SqDataType;
//
//// 顺序表的最大存储的数据个数
//// #define 宏定义:在程序编译前，预处理器会把代码中所有出现的 Sq_MAX_SIZE 原封不动地替换成 10
//#define Sq_MAX_SIZE 10
//
//// 静态顺序表结构定义
////typedef struct SequenceList {
////	SqDataType arr[Sq_MAX_SIZE]; //存储数据的静态数组
////	int size;					 //记录顺序表中已经存入的数据个数
////}SqLinst;
//
//// 有些地方简化一下，也可以直接定义匿名结构体，再 typedef 一个名称，如下：
//typedef struct {
//	SqDataType arr[Sq_MAX_SIZE]; //存储数据的静态数组
//	int size;					 //记录顺序表中已经存入的数据个数
//}SqLinst;


