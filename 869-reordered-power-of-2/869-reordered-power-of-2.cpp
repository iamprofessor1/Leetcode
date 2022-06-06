class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
        for(int i = 0 ;i<=31;i++){
            long long temp = 1LL<<i;
            string res = to_string(temp);
            sort(res.begin(),res.end());
            if(res == s){
                return true;
            }
            if(res.size()>s.size()){
                break;
            }
        }
        return false;
    }
};