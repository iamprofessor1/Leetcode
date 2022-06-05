class Solution {
public:
    double myNewPow(double x, int n) {
//         Using Binary Exponenetion
        double res = 1;
        while(n>0){
            if(n&1){
                //means odd
                res *=x;
            }
            x *=x;
            n = n>>1;
            
        }
        return res;     
    }
    double myPow(double x, int n) {
       if(n>=0){
           return myNewPow(x,n);
       } 
        return 1.0/myNewPow(x,abs(n));
       
    }
};