from typing import List

class Solution:
    def __init__(self):
        pass

    def runningSum(self, nums: List[int]) -> List[int]:
        sum = 0
        for i in range(len(nums)):
            sum += nums[i]
            nums[i] = sum
        return nums

def main():

    solution = Solution()
   
    nums = [1, 2, 3, 4]
    print("Input:", nums)
    result = solution.runningSum(nums)
    print("Running Sum:", result)

if __name__ == "__main__":
    main()
