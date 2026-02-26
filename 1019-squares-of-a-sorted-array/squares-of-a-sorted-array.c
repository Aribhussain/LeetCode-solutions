/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0 , right = numsSize - 1 , pos = numsSize - 1, lsquare = 0, rsquare = 0;
    int* result = (int*)malloc(sizeof(int) * numsSize);

    while(left <= right){
        lsquare = nums[left] * nums[left] , rsquare = nums[right] * nums[right];

        if(lsquare > rsquare){
            result[pos] = lsquare;
            left++;
        }
        else{
            result[pos] = rsquare;
            right--;
        }
        pos--;
    }
    *returnSize = numsSize;
    return result;
}