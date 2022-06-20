class Solution {
public:
    
    void rotateHere(vector<int>&nums, int start , int end ){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k==0){
            return ;
        }
        rotateHere(nums,0,nums.size()-1);
        rotateHere(nums,0,k-1);
        rotateHere(nums,k,nums.size()-1);
    }
};