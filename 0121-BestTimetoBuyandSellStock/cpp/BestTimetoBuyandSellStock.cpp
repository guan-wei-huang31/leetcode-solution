class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pos = 0;
        int next_pos = 1;
        int max_profit = 0;
        while(next_pos < prices.size()){
            if(prices[min_pos] < prices[next_pos]){
                int profit = prices[next_pos] - prices[min_pos];
                max_profit = max(max_profit, profit);
            }else{
                min_pos = next_pos;
            }
            next_pos++;
        }
        return max_profit;
    }
};