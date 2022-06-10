class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        int closest = abs(target-ans);
         for(int i = 0 ; i< nums.size() ; i++){
             int start = i+1;
             int end = nums.size()-1;
             while(start<end){
                int sum = nums[start]+ nums[end] + nums[i];
                 if(sum == target){
                     return sum;
                 }
                 else if(sum>target ){
                     int temp =abs(target-sum);
                     if(temp<closest){
                         closest = temp;
                         ans = sum;
                     }
                     end--;
                 }
                 else{
                    int temp =abs(target-sum);
                     if(temp<closest){
                         closest = temp;
                         ans = sum;
                     }
                     start++;
                 }
             }
         }
        return ans;
    }
};