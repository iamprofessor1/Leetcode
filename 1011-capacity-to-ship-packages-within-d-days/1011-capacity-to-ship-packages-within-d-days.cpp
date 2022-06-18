class Solution {
public:
//     FFFFF TTTTT
    bool checker(vector<int>&weights , long long target , int days){
        int count = 1;
        long long sum = 0;
        for(int i = 0  ; i< weights.size() ;i++){
            if(sum+ weights[i] > target){
                count++;
                sum = weights[i];
            }
            else{
                sum+= weights[i];
            }
        }
        return count<= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mx = 0 ; long long sum = 0;
        for(int i = 0 ; i<weights.size() ;i++)
        {
            mx = max(mx , weights[i]);
            sum += weights[i];
        }
        long long low = mx , high = sum;
        long long ans = sum;
        while(low<=high){
            long long mid  = low + (high - low)/2;
            if(checker(weights,mid,days)){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};