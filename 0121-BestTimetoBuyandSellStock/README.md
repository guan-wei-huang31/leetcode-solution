# **Best Time to Buy and Sell Stock**

## **Problem Statement**
This project provides a solution to the Best Time to Buy and Sell Stock problem. Given an array prices, where prices[i] represents the price of a given stock on day i, the goal is to find the maximum profit that can be achieved by buying one stock and selling it later.  

**Example Input:**
  ```
  Input: prices = [7,1,5,3,6,4]
  Output: 5
  Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
  Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
  ```
---

## **Solutions Overview**
### **Sliding Window Approach (C/C++)**
1. Initialize two pointers:
   - min_pos: Tracks the minimum stock price observed so far.
   - next_pos: Iterates through the array to find potential selling points.
2. Iterate through prices:
   - If prices[next_pos] is greater than prices[min_pos], calculate the profit.
   - If prices[next_pos] is lower than prices[min_pos], update min_pos (since it's now the new minimum).
   - Update max_profit whenever a larger profit is found.
3. Return max_profit.  

- Language: C++
- Code:
  ```
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
  ```
- Time Complexity: O(n)
  Each element is processed once, making the overall complexity O(n).
- Space Complexity: O(1)
  No extra data structures are used apart from variables.  
  
  
### **Single-Pass Approach (Python)**
1. Instead of using two pointers explicitly, track the minimum price seen so far and calculate profit dynamically.

- Language: Python
- Code:
  ```
  class Solution:
      def maxProfit(self, prices: List[int]) -> int:
          min_price = float('inf')
          max_profit = 0
          for num in prices:
              min_price = min(min_price, num)
              max_profit = max(max_profit, num-min_price)
          return max_profit
  ```
- Time Complexity: O(n)
  Each element is processed once, making the overall complexity O(n).
- Space Complexity: O(1)
  No extra data structures are used apart from variables.  
  
---

## **Conclusion**
This two-pointer and single-pass approach efficiently computes the maximum possible profit in O(n) time complexity, ensuring optimal performance.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Extend the approach to multiple transactions (Buy/Sell multiple times).
- Benchmark different approaches for real-time stock trading applications.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
