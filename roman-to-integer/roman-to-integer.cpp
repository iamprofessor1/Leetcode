class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        long long ans = 0;
        ans += m[s[s.size()-1LL]];
        for(int i = s.size()-2 ;i>=0 ;i--){
            if(m[s[i]] < m[s[i+1]] ){
                ans -= m[s[i]];
            }
            else{
            ans +=m[s[i]];}
        }
        return ans;
    }
};

// 5 - 1 + 100-10 + 1000 - 100