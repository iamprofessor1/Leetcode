class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum_sum_so_far = nums[0];
        int maxium_sum_ending_including_me = nums[0];
        for(int i =1 ; i< nums.size() ;i++){
            int maxium_sum_ending_including_me_previously = maxium_sum_ending_including_me;
            maxium_sum_ending_including_me = max(nums[i] , nums[i] + maxium_sum_ending_including_me_previously);
            maximum_sum_so_far=max(maximum_sum_so_far,maxium_sum_ending_including_me );
        }
        return maximum_sum_so_far;
    }
};