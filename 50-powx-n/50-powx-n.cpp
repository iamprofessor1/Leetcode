class Solution {
public:
    double myNewPow(double x, int n) {
        
        if(n==0){
            return 1;
        }
        else if(n==1){
                return x;
        }
        double small_ans = myPow(x,n/2);
        small_ans *= small_ans;
        if(n%2!=0){
            small_ans *=x;
        }
        return small_ans;
    }
    double myPow(double x, int n) {
       if(n>=0){
           return myNewPow(x,n);
       } 
        return 1.0/myNewPow(x,abs(n));
       
    }
};