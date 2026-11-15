#include <stdio.h>

//int main() {
//	int a = 10, b = 3;
//
//	printf("a + b = %d\n", a + b); // 加，10 + 3 = 13
//
//	printf("a - b = %d\n", a - b); // 减，10 - 3 = 7
//	
//	printf("a * b = %d\n", a * b); // 乘，10 * 3 = 30
//	
//	printf("a / b = %d\n", a / b); // 除，10 / 3 = 3
//	
//	printf("a %% b = %d\n", a % b); // 取模（求余数），10 % 3 = 1
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	printf("10 + 3 = %d\n", 10 + 3); // 加，13
//	printf("10 - 3 = %d\n", 10 - 3); // 减，7
//	printf("10 * 3 = %d\n", 10 * 3); // 乘，30
//	printf("10 / 3 = %d\n", 10 / 3); // 除，3
//	printf("10 %% 3 = %d\n", 10 % 3); // 取模（求余数），1
//	//扩展：在 printf 里，% 是格式符的开头标记，想原样输出一个 %，必须写两个
//
//	return 0;
//}


//int main() {
//	int num = 18;
//	printf("%d", num << 1); //36
//	return 0;
//}

//int main() {
//	int num = 18;
//	printf("%d", num << 1); //36
//	return 0;
//}



//int main(void)
//{
//    int x = -10;
//    int y = x << 1;
//
//    printf("x      = %d\n", x);        // -18
//    printf("x<<1   = %d\n", y);        // -36
//
//    /* 打印二进制，直观看到移位过程 */
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (x >> i) & 1);
//        if (i % 4 == 0) printf(" ");
//    }
//    printf("\n");
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (y >> i) & 1);
//        if (i % 4 == 0) printf(" ");
//    }
//    printf("\n");
//    return 0;
//}


//int main(void)
//{
//    int x = -1;
//    int y = x >> 1;
//
//    printf("x      = %d\n", x);       
//    printf("x>>1   = %d\n", y);
//
//    /* 打印二进制，直观看到移位过程 */
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (x >> i) & 1);
//        if (i % 4 == 0) printf(" ");
//    }
//    printf("\n");
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (y >> i) & 1);
//        if (i % 4 == 0) printf(" ");
//    }
//    printf("\n");
//    return 0;
//}


#include <stdio.h>
int main()
{
	int num1 = -3;
	int num2 = 5;
	printf("%d\n", num1 & num2);
	printf("%d\n", num1 | num2);
	printf("%d\n", num1 ^ num2);
	printf("%d\n", ~0);
	return 0;
}
