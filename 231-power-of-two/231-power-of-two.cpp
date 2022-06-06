class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n and floor(log2(n)) == ceil(log2(n)) ;
    }
};