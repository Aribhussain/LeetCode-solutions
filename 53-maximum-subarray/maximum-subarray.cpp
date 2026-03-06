class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0 , max_sum = INT_MIN;

        for(int i = 0; i < nums.size(); i++){   // this is KADAN's Algorithm 
            current_sum += nums[i];
            max_sum = max(current_sum,max_sum);
            if(current_sum < 0){                // main logic for Kadan's algorithm
                current_sum = 0;
            }
        }
        return max_sum;
    }
};