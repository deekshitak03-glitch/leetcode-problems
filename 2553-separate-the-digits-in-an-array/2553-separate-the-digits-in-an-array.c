/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
       
    // Max possible size = numsSize * 10 (safe)
    int* result = (int*)malloc(sizeof(int) * numsSize * 10);
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        int temp[10];
        int t = 0;
        int num = nums[i];

        // Extract digits (reverse order)
        while (num > 0) {
            temp[t++] = num % 10;
            num /= 10;
        }

        // Add in correct order
        for (int j = t - 1; j >= 0; j--) {
            result[k++] = temp[j];
        }
    }

    *returnSize = k;
    return result;
}