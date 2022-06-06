class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n>0) and (__builtin_popcount(n) ==1) && (__builtin_ctz(n)%2==0);
    }
};

// 1 -> 1
// 4 -> 100
// 8-