class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>m;
        vector<int>ans;
        for(int i = 0 ; i< nums.size() ; i++){
            if(m.find(target-nums[i])==m.end()){
//             insert element if not present 
                m[nums[i]] = i;
            }
            else{
//                 if target -  nums[i] already present then print their corressponding index
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                break;
            }
        }
        return ans;
    }
};