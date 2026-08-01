class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        int i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            result = result^s[i];
            result = result^t[j];
            j++;
            i++; 
        }
        result ^= t[j];
        return result;
    }
};