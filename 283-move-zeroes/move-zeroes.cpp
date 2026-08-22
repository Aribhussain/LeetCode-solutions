class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = i;
        while(j < nums.size()){
            if(nums[j] != 0){
                std::swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
    }
};