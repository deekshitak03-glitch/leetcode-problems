int numIdenticalPairs(int* nums, int numsSize) {
    
    int count[101] = {0};  // constraint: nums[i] <= 100
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result += count[nums[i]];  // add previous occurrences
        count[nums[i]]++;          // update frequency
    }

    return result;

}