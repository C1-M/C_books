#define _CRT_SECURE_NO_WARNINGS

// 2.7 移除元素

int removeElement(int* nums, int numsSize, int val) {
    int cnt = 0;

    for (int r = 0; r < numsSize; r++) {
        if (nums[r] != val) { // 如果满足条件
            nums[cnt++] = nums[r];
        }
    }

    return cnt;
}