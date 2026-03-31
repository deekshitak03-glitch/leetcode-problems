int alternatingSum(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        if (i % 2 == 0)
            sum += nums[i];   // even index → add
        else
            sum -= nums[i];   // odd index → subtract
    }

    return sum;
}