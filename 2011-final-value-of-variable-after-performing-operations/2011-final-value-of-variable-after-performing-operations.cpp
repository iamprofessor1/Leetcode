class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(auto x : operations){
        
            if(x[0]=='-' || x[x.size()-1] =='-'){
                ans--;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};