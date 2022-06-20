class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long ans = 0;
        for(int i = 1 ; i< prices.size() ;i++){
            int current_prices = prices[i];
            int previous_prices = prices[i-1];
            if(current_prices>previous_prices){
                ans +=(current_prices - previous_prices);
            }
        }
        return ans;
    }
};