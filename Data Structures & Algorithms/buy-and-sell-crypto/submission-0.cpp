class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l = 0;
        int minBuy = prices[0];

        for (int r = 1; r < prices.size(); r++) {
            int diff = prices[r] - minBuy;
            profit = max(diff, profit);
            minBuy = min(minBuy, prices[r]);
        }
        return profit;
    }
};
