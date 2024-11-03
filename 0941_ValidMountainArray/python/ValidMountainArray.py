from typing import List

class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        n = len(arr)
        if n < 3:
            return False

        i = 0

        # Single pass: Climb up and immediately down
        while i + 1 < n and arr[i] < arr[i + 1]:
            i += 1

        # Check if peak is the first or last element
        if i == 0 or i == n - 1:
            return False

        # Continue descending
        while i + 1 < n and arr[i] > arr[i + 1]:
            i += 1

        # If we reached the end, it's a valid mountain array
        return i == n - 1

# Example usage
solution = Solution()
arr = [0, 3, 2, 1]
print(solution.validMountainArray(arr))  # Output: True
