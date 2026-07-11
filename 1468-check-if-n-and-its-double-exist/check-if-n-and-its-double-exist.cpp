class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0 , j = 1;
        std::sort(arr.begin(),arr.end(), [](int a,int b){return std::abs(a) < std::abs(b);});
        // using absolute values so that the negetive doubles/nums behave as positive //

        while(i < arr.size() && j < arr.size()){
            if(i == j){
                j++;  
                continue; // to restart the loop//
            }
            if(arr[i] == 2*arr[j] || arr[j] == 2*arr[i])
                return true;
            else if(std::abs(arr[j]) < std::abs(2*arr[i]))
                j++;
            else
                i++;
        }
        return false;
    }
};