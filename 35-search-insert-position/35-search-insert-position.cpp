class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
//         finding lower bound
        int low = 0 , high = nums.size() -1;
        int ans = -1;
        while(low<=high){
            int mid = low +(high - low)/2;
            // cout<<low<<" "<<mid<<" "<<high<<endl;
            if(nums[mid] == target){
                ans = mid ;
                return ans;
            }
           else if(nums[mid] < target){
                ans = mid;
                low = mid +1 ;
            }
            else{
                high = mid - 1;
            }
        }
        return ans+1;
    }
};