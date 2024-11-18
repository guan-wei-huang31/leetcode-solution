from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            m = l + (r - l) // 2
            if nums[m] < target:
                l = m + 1
            elif nums[m] > target:
                r = m - 1
            else:
                return m
        return -1

def init():
    # Initialize the input values
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    target = 5
    return nums, target

def main():
    nums, target = init()
    solution = Solution()
    result = solution.search(nums, target)
    print(f"Index of target {target}: {result}")

if __name__ == "__main__":
    main()
