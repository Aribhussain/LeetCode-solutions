class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> seen;    // using a map for value and index pair//       
        for(int i = 0; i < nums.size(); i++){
            int current_elem = nums[i];
            if(seen.count(current_elem) > 0){
                if(i - seen[current_elem] <= k)
                    return true;
            }
            seen[current_elem] = i;
        }
        return false;
    }
};