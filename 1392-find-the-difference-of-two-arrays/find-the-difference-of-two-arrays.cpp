class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        std::sort(nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            // 1. Skip duplicate values in nums1
            while (i + 1 < nums1.size() && nums1[i] == nums1[i + 1]) {
                i++;
            }
            // 2. Skip duplicate values in nums2
            while (j + 1 < nums2.size() && nums2[j] == nums2[j + 1]) {
                j++;
            }
            if(nums1[i] == nums2[j]){
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                if(result[0].empty() || result[0].back() != nums1[i]){
                    result[0].push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(result[1].empty() || result[1].back() != nums2[j]){
                    result[1].push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i < nums1.size()){
            if(result[0].empty() || result[0].back() != nums1[i]){
                    result[0].push_back(nums1[i]);
                }
            i++;
        }
        while(j < nums2.size()){
            if(result[1].empty() || result[1].back() != nums2[j]){
                    result[1].push_back(nums2[j]);
                }
            j++;
        }
        return result;
    }
};