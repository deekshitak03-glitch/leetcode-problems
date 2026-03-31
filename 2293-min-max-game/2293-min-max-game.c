#include <stdio.h>

int minMaxGame(int* nums, int numsSize) {
    
    while (numsSize > 1) {
        for (int i = 0; i < numsSize / 2; i++) {
            if (i % 2 == 0) {
                // even index → min
                nums[i] = nums[2 * i] < nums[2 * i + 1] 
                          ? nums[2 * i] 
                          : nums[2 * i + 1];
            } else {
                // odd index → max
                nums[i] = nums[2 * i] > nums[2 * i + 1] 
                          ? nums[2 * i] 
                          : nums[2 * i + 1];
            }
        }
        numsSize /= 2;  // reduce size
    }

    return nums[0];
}