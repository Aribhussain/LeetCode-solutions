/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i = 0, sum = 0, j = numsSize-1 , k = j;
    int* result = (int*)malloc(sizeof(int) * numsSize);

    while(j >= 0){
        for(i = 0; i <= j; i++)
            sum += nums[i];
        result[k] = sum;
        sum = 0;
        j--;
        k--;
    }
    *returnSize = numsSize;
    return result;
}