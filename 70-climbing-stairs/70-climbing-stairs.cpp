class Solution {
public:
    int climbStairs(int n) {
        int n_0 = 1 , n_1 = 1;
        if(n== 0 || n==1)return n;
        int n_th = 0;
        for(int i = 2 ; i<=n ;i++){
            n_th = n_0 + n_1;
            n_0 = n_1;
            n_1 = n_th;
        }
        return n_th;
    }
};