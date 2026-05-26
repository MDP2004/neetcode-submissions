class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int currMax = prices[prices.size()-1];
        for (int i = prices.size()-2 ; i>=0 ; i--){
            currMax = max(currMax , prices[i]);
            ans = max(ans, currMax-prices[i]);
        }
        return ans;
    }
};
