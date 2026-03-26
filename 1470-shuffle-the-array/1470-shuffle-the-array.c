

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
     int P1=0,P2=n,i=0;
     int *result = malloc(2*n*sizeof(int));
     while(P1<n){
        result[i++] = nums[P1++];
        result[i++] = nums[P2++];
     }
     *returnSize = 2*n;
     return  result;
}