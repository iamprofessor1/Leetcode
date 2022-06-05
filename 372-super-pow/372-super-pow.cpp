class Solution {
public:
    int  binPowMod(int a, long long  number ,long long mod =1337 ){
        long long  res =1;
        long long x =a;
        while(number>0){
            if(number&1){
                res = (res%mod * x%mod)%mod;
            }
            x = (x%mod * x%mod)%mod;
            number = number>>1;
        }
        return res%mod;
    }
    int superPow(int a, vector<int>& b) {
        long long number = 0;
        long long ten = 1;
//         phi(1337) => 1337(1-1/7)(1-1/191) => 1140
        for(long long i = b.size()-1LL ; i>=0 ; i--){
            number += (b[i]%1140*ten%1140)%1140;
            ten = (ten%1140 * 10%1140)%1140;
        }
        return binPowMod(a,number);
        // return number;
        
        
    }
};

