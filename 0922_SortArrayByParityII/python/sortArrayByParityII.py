from typing import List

class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        # 提取所有偶數和奇數
        evens = [num for num in nums if num % 2 == 0]
        odds = [num for num in nums if num % 2 == 1]
        
        # 交替組合偶數和奇數
        sorted_nums = []
        for even, odd in zip(evens, odds):
            sorted_nums.extend([even, odd])
        
        return sorted_nums

# Example usage
solution = Solution()
nums = [4, 2, 5, 7]
sorted_nums = solution.sortArrayByParityII(nums)
print(sorted_nums)
