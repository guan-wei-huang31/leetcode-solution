from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # Dictionary to store the frequency of each element
        dict_num = {}
        # Iterate through each number in the list
        for num in nums:
            # Increment the count for the number in the dictionary
            dict_num[num] = dict_num.get(num, 0) + 1
            # Check if the current number count is greater than half the list size
            if dict_num[num] > len(nums) / 2:
                return num

# Simple tests
if __name__ == "__main__":
    solution = Solution()
    print(solution.majorityElement([3, 2, 3]))  # Expected output: 3
    print(solution.majorityElement([2, 2, 1, 1, 1, 2, 2]))  # Expected output: 2
    print(solution.majorityElement([1]))  # Expected output: 1
    print(solution.majorityElement([5, 5, 5, 1, 2, 5, 5]))  # Expected output: 5
