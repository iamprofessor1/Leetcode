class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // if(k==0 ||nums.size() <2 || k>=nums.size() ){
        //     return false;
        // }
        int i = 0;
        unordered_map<int,int>ump;
        for(int j = 0 ;j<=k && j<nums.size();j++){
            int curr = nums[j];
            ump[curr]++;
            if(ump[curr]>=2){
                return true;
            }
        }
        for(int j = k+1 ; j< nums.size() ;j++ ){
            int curr = nums[j];
            //starting ko hatao 
            int starting_num = nums[i];i++;
            ump[starting_num]--;
            ump[curr]++;
            if(ump[curr]>=2){
                return true;
            }
        }
        return false;
    }
};