class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy = 0;
        int maxP = 0;
        for(int i=1; i<n; i++) {
            if(prices[i] < prices[buy]) buy = i;
            int currP = prices[i]-prices[buy];
            if(currP > maxP) maxP=currP;
        }
        return maxP;
    }
};
