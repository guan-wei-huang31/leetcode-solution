class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float('inf')
        max_profit = 0
        for num in prices:
            min_price = min(min_price, num)
            max_profit = max(max_profit, num-min_price)
        return max_profit