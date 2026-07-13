#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//void delay(int ms) { Sleep(ms); }
//
//void print_heart() {
//    printf("\n");
//    printf("       ******    ******\n");
//    printf("      ******************\n");
//    printf("    **********************\n");
//    printf("   ************************\n");
//    printf("  **************************\n");
//    printf("  **************************\n");
//    printf("   ************************\n");
//    printf("    **********************\n");
//    printf("      ******************\n");
//    printf("        **************\n");
//    printf("          **********\n");
//    printf("            ******\n");
//    printf("              **\n");
//    printf("\n");
//}
//
//void print_flower() {
//    printf("\n");
//    printf("        ╭╮\n");
//    printf("       ╱╲╱╲\n");
//    printf("      ╱╲╱╲╱╲\n");
//    printf("     ╱╲╱╲╱╲╱╲\n");
//    printf("      ╲╱╲╱╲╱\n");
//    printf("       ╲╱╲╱\n");
//    printf("        ╲╱\n");
//    printf("         |\n");
//    printf("         |\n");
//    printf("        /|\\\n");
//    printf("\n");
//}
//
//void typewriter(const char* text, int speed) {
//    for (int i = 0; text[i]; i++) {
//        printf("%c", text[i]);
//        fflush(stdout);
//        delay(speed);
//    }
//}
//
//int calculate_love() {
//    int you = 520;
//    int me = 1314;
//    int love = you + me;
//    return love;
//}
//
//int main() {
//    system("cls");
//
//    printf("════════════════════════════════════════\n");
//    typewriter("  正在计算...\n\n", 100);
//
//    delay(500);
//    printf("  输入参数：\n");
//    printf("    ┌─────────────┬─────────┐\n");
//    printf("    │   参数名    │   值    │\n");
//    printf("    ├─────────────┼─────────┤\n");
//    printf("    │    你       │  520    │\n");
//    printf("    │    我       │ 1314    │\n");
//    printf("    └─────────────┴─────────┘\n\n");
//
//    delay(800);
//    typewriter("  执行公式：我 + 你 = ?\n\n", 150);
//
//    delay(1000);
//    int result = calculate_love();
//    printf("  计算结果：%d + %d = %d\n\n", 1314, 520, result);
//
//    delay(800);
//    printf("  正在解码 %d ...\n\n", result);
//    delay(1000);
//
//    for (int i = 0; i < 3; i++) {
//        printf("  %c", '.');
//        fflush(stdout);
//        delay(500);
//    }
//    printf("\n\n");
//
//    system("cls");
//
//    print_heart();
//
//    printf("════════════════════════════════════════\n");
//    typewriter("              我喜欢你\n", 200);
//    printf("════════════════════════════════════════\n\n");
//
//    printf("  520 = 我爱你\n");
//    printf(" 1314 = 一生一世\n");
//    printf(" 1834 = 一辈子\n");
//    printf("\n");
//
//    print_flower();
//
//    printf("  ┌──────────────────────────────────┐\n");
//    typewriter("  │  你是我生命中最美的代码片段      │\n", 150);
//    typewriter("  │  永远不会被删除，永远在我心里    │\n", 150);
//    typewriter("  │  我喜欢你，不仅仅是今天          │\n", 150);
//    printf("  └──────────────────────────────────┘\n\n");
//
//    printf("  Press Enter to exit...\n");
//    getchar();
//
//    return 0;
//}






//排列整型数组
//输入10个整数，然后使用冒泡排序对数组内容进行升序排序，然后打印数组的内容
//
//测试1：
//输入：10 9 8 7 6 5 4 3 2 1
//输出：1 2 3 4 5 6 7 8 9 10
//测试2：
//输入：1 3 2 4 5 7 6 8 10 9
//输出：1 2 3 4 5 6 7 8 9 10

//#include<stdio.h>
//int main() {
// 
//	int arr[10] = { 0 };
//
//	printf("输入排序前的数字 10 位：");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int m = 0; m < 9; m++) {
//		for (int x = 0; x < (9 - m); x++) {
//			if (arr[x] > arr[x + 1]) {
//				int y = arr[x + 1];
//				arr[x + 1] = arr[x];
//				arr[x] = y;
//			}
//		}
//	}
//	
//	printf("输出排序后的数字 10 位：");
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//找出盗窃者
//某地发生了一件盗窃案，警察通过排查确定盗窃者必为4个嫌疑人的一个
/*
以下为4个嫌疑人的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是盗窃者。
*/

//#include <stdio.h>
//int main() {
//    // 遍历可能的盗窃者：0=A, 1=B, 2=C, 3=D
//    for (int thief = 0; thief <= 3; thief++) {
//        // 判断每个陈述的真假（1为真，0为假）
//        int a_truth = (thief != 0); // A说"不是我" → 盗窃者不是A
//        int b_truth = (thief == 2); // B说"是C" → 盗窃者是C
//        int c_truth = (thief == 3); // C说"是D" → 盗窃者是D
//        int d_truth = !c_truth;     // D说"C在胡说" → C的陈述为假
//
//        // 计算真话总数
//        int true_count = a_truth + b_truth + c_truth + d_truth;
//
//        // 检查是否满足"3真1假"
//        if (true_count == 3) {
//            printf("盗窃者是");
//            if (thief == 0) printf("A\n");
//            else if (thief == 1) printf("B\n");
//            else if (thief == 2) printf("C\n");
//            else printf("D\n");
//            break;
//        }
//    }
//    return 0;
//}

