class Solution {
public:
    bool checker(vector<int>&position , int target , int m){
        int counter = 1;
        int previous  = position[0];
        for(int i =1 ; i<position.size();i++){
                if(position[i] - previous >= target){
                    counter++;
                    previous = position[i];
                }
        }
        return counter>= m;
    }
    int maxDistance(vector<int>& position, int m) {
//         same as agreesive cows 
//         TTTTT FFFF
        sort(position.begin(),position.end());
        int n = position.size();
        long long  low = 1 , high = position[n-1] - position[0];
        long long ans = high;
        while(low<=high){
            long long mid = low+ (high - low)/2;
            if(checker(position , mid , m )){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
    }
};