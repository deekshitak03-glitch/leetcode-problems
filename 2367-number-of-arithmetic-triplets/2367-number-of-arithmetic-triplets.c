int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int first = nums[i];
        int second = first + diff;
        int third = first + 2 * diff;

        int foundSecond = 0, foundThird = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == second)
                foundSecond = 1;
            if (nums[j] == third)
                foundThird = 1;
        }

        if (foundSecond && foundThird)
            count++;
    }

    return count;
}