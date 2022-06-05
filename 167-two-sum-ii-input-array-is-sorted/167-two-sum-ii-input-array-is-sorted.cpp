class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        vector<int>ans(2,0);
        while(i<j){
            int fi = nums[i];
            int se =nums[j];
            if(fi + se == target){
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            } 
            else if(fi +se >target){
                    j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};