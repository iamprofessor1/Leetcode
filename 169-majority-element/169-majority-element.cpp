class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0;
        int count  = 1 ;
        for(int  i =  1 ;i<nums.size();i++){
            if(nums[i] == nums[res] ){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                count = 1 ; 
                res = i;
            }
        }
        count = 0;
        for(int i = 0 ; i<nums.size() ;i++){
            if(nums[res] ==nums[i]){
                count++;
            }
        }
        if(count<=nums.size()/2){
            return -1;
        }
        return nums[res];
    }
};