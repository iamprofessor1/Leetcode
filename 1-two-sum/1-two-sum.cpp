class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int,int>>vp;
        for(int i = 0 ; i< nums.size();i++){
            vp.push_back(make_pair(nums[i],i));
        }
        sort(vp.begin(),vp.end());
        int i = 0 ;
        int j = nums.size()-1;
        vector<int>ans;
        while(i<j){
            int fi = vp[i].first;
            int se = vp[j].first;
            if(fi + se == target){
                ans.push_back(vp[i].second);
                ans.push_back(vp[j].second);
                break;
            }
            else if(fi + se > target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};