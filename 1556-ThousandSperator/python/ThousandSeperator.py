class Solution:
    def thousandSeparator(self, n: int) -> str:
        ans = ''
        str_n = str(n)
        for i in range(len(str_n)):
            if i > 0 and (len(str_n)-i) % 3 == 0:
                ans += '.'
            ans += str_n[i]
        return ans
        
if __name__ == "__main__":
    solution = Solution()
  
    test_cases = [123456789, 1234, 123, 12, 1, 0]
    
    for test_case in test_cases:
        result = solution.thousandSeparator(test_case)
        print(f"Input: {test_case}, Output: '{result}'")

