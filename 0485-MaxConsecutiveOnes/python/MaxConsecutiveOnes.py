class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        counts = 0
        powers = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                counts += 1
            else:
                counts = 0
            powers = max(powers, counts)
        return powers

if __name__ == "__main__":
    solution = Solution()
    # Test case
    nums = [1, 1, 0, 1, 1, 1]  # Example input
    print(solution.findMaxConsecutiveOnes(nums))  # Output: 3

