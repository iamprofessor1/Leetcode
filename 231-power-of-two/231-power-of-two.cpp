class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return n >0  and floor(log2(n)) == ceil(log2(n)) ;
        // return (n>0) and ((n&(n-1))==0) ;
        return (n>0) and 2147483648 % n ==0;
    }
};