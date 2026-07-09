//#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& c = a;
//	int& d = c;
//
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", &c);
//	printf("%p\n", &d);
//
//	return 0;
//}

//#include"SqList.h"
//
//int main() {
//	SqList s;
//	//SqListInit(s);//cpp
//	SqListInit(&s);//cpp
//
//
//	SqListDestroy(&sl);
//
//	return 0;
//}



#include"SqList.h"

int main() {
	SqList sl;
	//SqListInit(sl);//cpp
	SqListInit(&sl);//cpp
	//Î²²å
	SqListInsert(&sl, 0, 1);
	SqListInsert(&sl, 1, 2);
	SqListInsert(&sl, 2, 3);
	SqListPrint(&sl);

	//Í·²å
	SqListInsert(&sl, 0, 100);
	SqListPrint(&sl);

	return 0;
}

