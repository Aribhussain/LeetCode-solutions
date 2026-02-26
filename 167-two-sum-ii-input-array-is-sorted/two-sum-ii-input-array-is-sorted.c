/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0 , right = numbersSize - 1 , current_sum = 0;
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    while(left < right){
        current_sum = numbers[left] + numbers[right];
        if(current_sum == target){
            result[0] = left+1;
            result[1] = right+1;
            return result;
        }
        else if(current_sum < target)
            left++;
        else
            right--;
    }
    return NULL;
}