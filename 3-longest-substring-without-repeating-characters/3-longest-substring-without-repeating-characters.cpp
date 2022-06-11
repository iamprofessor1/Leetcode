class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        map<char,int>mp;
        int ans = 0;
        for(int i = 0 ; i< s.size() ;i++){
            end = i ;
            char current = s[i];
            start = max( mp[current], start); 
		    ans = max(ans, end - start + 1);
		    mp[s[i]] = end + 1;
            
        }
        // cout<<end<<" "<<start<<endl;
        return ans;
    }
    
};

// babcadba