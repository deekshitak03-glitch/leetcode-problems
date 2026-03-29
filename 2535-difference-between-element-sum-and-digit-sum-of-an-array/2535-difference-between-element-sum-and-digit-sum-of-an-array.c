int differenceOfSum(int* nums, int numsSize) {
    int elementSum = 0;
    int digitSum = 0;

    for (int i = 0; i < numsSize; i++) {
        elementSum += nums[i];

        int num = nums[i];
        while (num > 0) {
            digitSum += num % 10;  // get last digit
            num /= 10;            // remove last digit
        }
    }

    return abs(elementSum - digitSum);
}