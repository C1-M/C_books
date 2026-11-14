#define _CRT_SECURE_NO_WARNINGS

//OJ
//189. 轮转数组
//void rotate(int* nums, int numsSize, int k) {
//    k %= numsSize;
//    if (k == 0)
//        return;
//
//    // 替换变长数组，改用malloc堆内存
//    int* tmp = (int*)malloc(sizeof(int) * k);
//    int j = 0;
//
//    // 拷贝后k个元素
//    for (int i = numsSize - k; i < numsSize; ++i) {
//        tmp[j++] = nums[i];
//    }
//
//    // 前n-k个向后移动k位，必须从后往前！
//    for (int i = numsSize - k - 1; i >= 0; --i) {
//        nums[i + k] = nums[i];
//    }
//
//    // tmp放回nums头部
//    for (int i = 0; i < k; ++i) {
//        nums[i] = tmp[i];
//    }
//    free(tmp);
//}
