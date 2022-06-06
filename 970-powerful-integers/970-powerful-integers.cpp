class Solution {
public:
   
    
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>ans;
        set<int>s;
        int mini = min(x,y);
        int maxi = max(x,y);
        x = mini;
        y = maxi;
        if(mini!=1&&maxi!=1){
        for(long long i = 0 ; i <= ceil((log(bound)*1.0)/log(x));i++){
            long  long a = pow(x,i);
            for(long long j = 0 ; j <= ceil((log(bound)*1.0)/log(y));j++){
               long long b = pow(y,j);
                if(a+b<= bound && s.find(a+b)==s.end()){
                    ans.push_back(a+b);
                    s.insert(a+b);
                }
            }
        
        }}
        else if (maxi!=1){
            for(long long j = 0 ; j <= ceil((log(bound)*1.0)/log(y));j++){
               long long b = pow(y,j);
                if(1+b<= bound && s.find(1+b)==s.end()){
                    ans.push_back(1+b);
                    s.insert(1+b);
                }
            }
        }
        else{
//             maxi == 1 and mini == 1
            if(2<= bound)
            {
            ans.push_back(2);
            }
        }
        return ans;
    }
};

