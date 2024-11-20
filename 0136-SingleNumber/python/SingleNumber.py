from typing import List

class Solution:
    def __init__(self):
        pass

    def singleNumber(self, nums: List[int]) -> int:
        dic = {}
        for num in nums:
            dic[num] = dic.get(num, 0) + 1
        for key, val in dic.items():
            if val == 1:
                return key

def main():
    nums = [4, 1, 2, 1, 2]
    
    solution = Solution()
    
    result = solution.singleNumber(nums)
    print("The single number is:", result)

if __name__ == "__main__":
    main()
