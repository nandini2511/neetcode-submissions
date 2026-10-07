class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        smallestBuy = prices[0]
        maxProfit = 0

        for i in range(len(prices)):
            smallestBuy = min(smallestBuy, prices[i])
            maxProfit = max(prices[i] - smallestBuy, maxProfit)

        return maxProfit
        