class Solution {
private:
    int get_max(int val){
        int max_dig = 0;
        while(val > 0){
            int last_dig = val % 10;
            max_dig = std::max(max_dig,last_dig);
            val /= 10;
        }
        return max_dig;
    }
public:
    int maxSum(vector<int>& nums) {
        int max_sum = -1;
        vector<int> hash_arr(10,-1);
        int cur_max = 0;
        for(int i = 0; i < nums.size(); i++){
            cur_max = get_max(nums[i]);
            if(hash_arr[cur_max] == -1){
                hash_arr[cur_max] = nums[i];
            }
            else{
                max_sum = std::max(max_sum,hash_arr[cur_max] + nums[i]);
                if(nums[i] > hash_arr[cur_max]){
                    hash_arr[cur_max] = nums[i];
                }
            }
        }
        return max_sum;
    }
};