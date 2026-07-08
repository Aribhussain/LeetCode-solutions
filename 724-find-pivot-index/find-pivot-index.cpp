class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0 , left_sum = 0, right_sum = 0;
        total_sum = std::accumulate(nums.begin(),nums.end(),0);
        for(int i = 0; i < nums.size(); i++){
            right_sum = total_sum - left_sum - nums[i];
            if(left_sum == right_sum)
                return i;
            else{
                left_sum = left_sum + nums[i];
            }
        }
        return -1;
    }
};