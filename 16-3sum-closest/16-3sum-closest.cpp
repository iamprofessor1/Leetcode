class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        int ans = v[0]+v[1]+v[2];
        int min_diff = abs(ans-target);
        for(int i = 0 ; i<v.size()-2 ;i++){
            int start = i+1;
            int end = v.size()-1LL;
            while(start<end){
                int sum = v[start]+v[end]+v[i];
                int diff = abs(sum - target) ;
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    if(min_diff > diff){
                        min_diff = diff;
                        ans = sum;
                    }
                    end--;
                }
                else{
                    if(min_diff > diff){
                        min_diff = diff;
                        ans = sum;
                    }
                    start++;
                }
            }
        }
        return ans;
    }
};