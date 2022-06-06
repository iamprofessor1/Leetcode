class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev_s =s;
        reverse(s.begin(),s.end());
        // cout<<s<<" "<<rev_s;
        return s == rev_s;
    }
};