class Solution {
public:
    bool log4(int n){
        if((n<=0 )|| (n%4 != 0 && n!=1)){
            return false;
        }
        else if(n==1){
            return true;
        }
        bool small_ans = log4(n/4);
        return small_ans;
    }
    bool isPowerOfFour(int n) {
        return log4(n);
    }
};
