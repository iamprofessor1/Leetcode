class Solution {
public:
    int countGoodSubstrings(string s) {
        int start = 0;
        unordered_map<int,int>ump;
        int end = 0;
        int ans = 0;
        for( end = 0 ; end < 3 && end<s.size() ;end++){
            ump[s[end]]++;
        }
        if(end!=3){
            return ans;
        }
        if(ump.size() == end - start){
            ans += 1;
        }
        for(;end<s.size() ; end++){
            ump[s[start]]--;
            if(ump[s[start]] == 0){
                ump.erase(s[start]);
            }
            start++;
            ump[s[end]]++;
            if(ump.size() == end - start +1 ){
                ans++;
            }
        }
        return ans;
    }
    
};