#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 分支和循环
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)// == 判断是否相等
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//
//	return 0;
//}


//int main()
//{
//    int age = 0;
//    printf("输入你的年龄：\n");
//    //scanf("%d", &age);
//    if (age >= 18)
//    {
//        printf("成年");
//    }
//    else
//    {
//        printf("未成年");
//    }
//
//    return 0;
//}




//
//int main()
//{
//	int age = 0;//好习惯：变量创建的时候，给一个初始值
//	//输入
//	scanf("%d", &age);
//	//判断
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}




//int main()
//{
//	int age = 0;//好习惯：变量创建的时候，给一个初始值
//	printf("%d\n", age);
//
//	return 0;
//}

//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//
//    if (age >= 18)
//    {
//        printf("成年了\n");
//        printf("可以谈恋爱了\n");
//    }
//    else
//    {
//        printf("未成年\n");
//        printf("好好学习\n");
//    }
//    return 0;
//}
//

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		printf("正数");
//	}
//	else if (num < 0)
//	{
//		printf("负数");
//	}	
//	else
//	{
//		printf("0");
//	}		
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 1)
//			printf("奇数\n");
//		else
//			printf("偶数\n");
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age <= 89)
//	{
//		printf("老年\n");
//	}
//	else if (age >= 90)
//	{
//		printf("老寿星\n");
//	}
//		
//	return 0;
//}






//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44) //18-44
//		printf("青年\n");
//	else if (age <= 59)//45-59
//		printf("中年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//
//    return 0;
//}
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 3 > 2);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//如果num == 3，打印hehe
//	scanf("%d", &num);
//
//	if (num == 3)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//如果num == 3，打印hehe
//	scanf("%d", &num);
//
//	if (num = 3)
//		printf("hehe\n");
//
//	return 0;
//}

//技巧：当一个变量和常量值比较相等的时候，把常量放在==的左边

//int main()
//{
//	int num = 0;
//	//如果num == 3，打印hehe
//	scanf("%d", &num);
//
//	if (3 == num)
//		printf("hehe\n");
//
//	return 0;
//}



//int main()
//{
//	int i = 3;
//	int j = 8; 
//	int k = 5;
//	if (i < j < k) //err
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main() 
//{
//	int i = 22;
//	int j = 33;
//	int k = 11;
//	//j>i>k
//	if (k < i && i < j)
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 3;
//	int j = 8;
//	int k = 15;
//	if (i < j && j < k)  //&& -- 并且
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (18 <= age && age <= 40)
//	{
//		printf("成年");
//	}
//	return 0;
//}

// exp1 ? exp2 : exp3
// 条件操作符也叫三目操作符，需要接受三个操作数
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    scanf("%d", &a);
//
//    if (a > 5)
//        b = 3;
//    else
//        b = -3;
//	  // 等价于下面
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//    return 0;
// 
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("a > b ? a : b\n");
//	printf("输入 a：");
//	scanf("%d%", &a);
//	printf("输入 b：");
//	scanf("%d", &b);
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	printf("如果 a > b （为真） max 输出 a，（为假）否则输出 b:\n");
//	max = (a > b ? a : b);
//
//	printf("max = %d", max);
//	return 0;
//}

// ! 逻辑取反操作符
//int main()
//{
//	int a = 0;
//	printf("!a 给 a 赋值：");
//	scanf("%d", &a);
//	if (!a)
//		printf("a 为假(a 值为 0 时)，输出 a = %d", a);
//	else
//		printf("a 为真(a 值非 0 时)，输出 a = %d", a);
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int max = 0;
//    //if (a > b)
//    //    max = a;
//    //else
//    //    max = b;
//
//    max = (a > b ? a : b);//
//    printf("%d\n", max);
//
//    return 0;
//}


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag) //flag为真
//	{
//		printf("hehe\n");
//	}
//
//	//如果flag为假，打印haha
//	/*if (flag == 0)
//	{
//		printf("haha\n");
//	}*/
//
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春天\n");
//	}
//	return 0;
//}

//int main() 
//{
//	int moth = 0;
//	scanf("%d", &moth);
//	if (moth = 12 || (moth <= 5 && moth >= 1))
//	{
//		printf("春天\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month ==12 || month == 1 || month == 2)
//	{
//		printf("冬天\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0) //2004
//	{
//		printf("闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//
//	return 0;
//}

// 判断闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("闰年");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("闰年\n");
//	}
//
//	return 0;
//}

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//    i = (a++ && ++b && d++);
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    
//    return 0;
//}
//



//
//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = (a++ && ++b && d++);
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//    return 0;
//}

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//    i = (a++ || ++b || d++);
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//    return 0;
//}


//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//    i = (a++ || ++b || d++);
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//    return 0;
//}
//

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 3 == 0)
//	{
//		printf("余数是0");
//	}
//	else if (a % 3 == 1)
//	{
//		printf("余数是1");
//	}
//	else
//	{
//		printf("余数是2");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("余数是0\n");
//	else if(num % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 1;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	default:
//		printf("输入错误，请输入正确的正整数数字");
//		break;
//	case 0:
//		printf("余数是0");
//		break;
//	case 1:
//		printf("余数是1");
//		break;
//	case 2:
//		printf("余数是2");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int num = 0;
//	scanf("%d", &num);
//	
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	switch (m)
//	{
//	default:
//		printf("请输入1~7的数字");
//		break;
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//	return 0;
//}




// 
// 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误，请输入1~7的值\n");
//		break;
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误，请输入1~7的值\n");
//		break;
//	case 1:
//		printf("工作日\n");
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误，请输入1~7的值\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
//	}
//	return 0;
//}
//

//int main()
//{
//	while (1);
//	printf("hello\n");
//	return 0;
//}

//
//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	
//	while (n <= 10)
//	{
//		printf(" %d", n);
//		n++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		++i;
//	}
//	return 0;
//}