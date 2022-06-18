class Solution {
public:
    bool checker(vector<int>&nums , long long target , int m){
        long long count = 1;
        long long sum = 0;
        for(int i = 0 ; i< nums.size() ;i++){
            if(sum + nums[i] > target){
                count++;
                sum =nums[i];
            }
            else{
                sum +=nums[i];
            }
        }
        return count<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
//         minimise the largest sum 
//         FFFFF TTTTTT
        int  mx = 0;long long  sum = 0;
        for(int i = 0 ; i< nums.size() ;i++ ){
            mx = max(nums[i],mx);
            sum += nums[i];
        }
        long long low = mx;
        long long high = sum;
        long long ans = sum;
        while(low<=high){
            long long mid = (low) + (high - low)/2;
            if(checker(nums,mid,m)){
                high = mid -1;
                ans =mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};