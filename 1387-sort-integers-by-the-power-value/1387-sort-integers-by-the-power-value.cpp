class Solution {
public:
    long long  power(int n){
        long long count = 0;
        while(n!=1){
            count++;
            if(n&1){
//             odd
                n = 3*n +1;
            }
            else{
                n /=2;
            }
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<long long , long long > > vp;
        for(int i = lo ; i<=hi ; i++ ){
            vp.push_back(make_pair(i,power(i)));   
        }
        sort(vp.begin(),vp.end(),[](const pair<long long,long long> & a , const pair<long long ,long long> &b){
            if(a.second != b.second){
                return a.second<b.second;
            }
            return a.first<b.first;
        });
        return vp[k-1].first;
        
    }
};