class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 ,j = i ;
        while(j < nums.size()){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};