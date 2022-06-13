class Solution {
public:
    int tribonacci(int n) {
        int t_0 = 0 ,t_1 =1 , t_2 = 1;
        if(n==0 ){
            return 0;
        }
        if(n==2|| n==1 ){
            return 1;
        }
        int t_n = 0;
        for(int i = 3 ; i<=n ;i++){
            t_n = t_0 + t_1 + t_2;
            t_0 = t_1;
            t_1 = t_2;
            t_2 = t_n;
        }
        return t_n;
    }
};