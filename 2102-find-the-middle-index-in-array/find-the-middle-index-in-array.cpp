class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix_sum(nums.size());
        int left, right = 0;
        std::partial_sum(nums.begin(),nums.end(),prefix_sum.begin());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0)
                left = 0;
            else
                left = prefix_sum[i-1];
            right = prefix_sum.back() - prefix_sum[i];
            if(left == right)
                return i;
        }
        return -1;
    }
};
//can be solved using the pivot index finding logic//