int thirdMax(int* nums, int numsSize) {
     long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        
        if (nums[i] == first || nums[i] == second || nums[i] == third) {
            continue; // skip duplicates
        }

        if (nums[i] > first) {
            third = second;
            second = first;
            first = nums[i];
        } 
        else if (nums[i] > second) {
            third = second;
            second = nums[i];
        } 
        else if (nums[i] > third) {
            third = nums[i];
        }
    }

    // if third max doesn't exist
    if (third == LONG_MIN) {
        return first;
    }

    return third;
}