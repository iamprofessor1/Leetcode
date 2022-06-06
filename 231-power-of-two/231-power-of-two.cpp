class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n== 0){
            return false;
        }
        if(n==1){
            return true;
        }
        // long long fi = floor(log2(n));
        // long long se = ceil(log2(n));
        return floor(log2(n)) == ceil(log2(n)) ;
    }
};