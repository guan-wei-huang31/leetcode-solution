class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        num = str(x)
        point_l = 0
        point_r = len(num)-1
        while point_l<point_r:
            if num[point_l] != num[point_r]:
                return False
            else:
                point_l += 1
                point_r -= 1
        return True
        

if __name__ == "__main__":
    solution = Solution()
    test_cases = [121, -121, 10, 0, 12321]
    
    for case in test_cases:
        result = solution.isPalindrome(case)
        print(f"Input: {case} -> Is Palindrome? {result}")
