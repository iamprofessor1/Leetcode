class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int required = 0;
        for(auto x : nums){
            required ^= x;
        }
        return required;
    }
};