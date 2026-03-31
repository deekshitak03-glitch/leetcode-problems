/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
     int hash[1001] = {0};
    
    // Mark elements of nums1
    for (int i = 0; i < nums1Size; i++) {
        hash[nums1[i]] = 1;
    }

    int* result = (int*)malloc(1001 * sizeof(int));
    int index = 0;

    // Check in nums2
    for (int i = 0; i < nums2Size; i++) {
        if (hash[nums2[i]] == 1) {
            result[index++] = nums2[i];
            hash[nums2[i]] = 0; // avoid duplicates
        }
    }

    *returnSize = index;
    return result;
}