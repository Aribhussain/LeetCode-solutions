class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int pos = nums.size() -1;
        vector<int> result(nums.size());
        while(i <= j){
            int lsquare = nums[i]*nums[i];
            int rsquare = nums[j]*nums[j];
            if(lsquare < rsquare){
                result[pos] = rsquare;
                j--;
            }
            else{
                result[pos] = lsquare;
                i++;
            }
            pos--;
        }
        return result;
    }
};