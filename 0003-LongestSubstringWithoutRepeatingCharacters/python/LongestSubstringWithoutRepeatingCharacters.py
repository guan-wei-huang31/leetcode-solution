class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0: return 0
        left = 0
        dic = {}
        max_length = 1
        for i in range(len(s)):
            if s[i] in dic:
                left = max(left, dic[s[i]] + 1)
            max_length = max(max_length, i - left + 1)
            dic[s[i]] = i
        return max_length