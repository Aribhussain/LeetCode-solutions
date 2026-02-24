int search(int* nums, int numsSize, int target) {
    int i = 0, j = numsSize-1, mid;
    while(i<=j){
        mid = (i + j)/2;
        if(nums[mid] == target)
            return mid;
        else if(target < nums[mid])
            j = mid-1;
        else
            i = mid+1;
    }
    return -1;
}