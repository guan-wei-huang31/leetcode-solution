class Solution:
    def __init__(self):
        pass

    def firstUniqChar(self, s: str) -> int:
        from collections import Counter
        counts = Counter(s)
        for idx, chr in enumerate(s):
            if counts[chr] == 1:
                return idx
        return -1

if __name__ == "__main__":
    solution = Solution()
    # 測試範例
    s = "loveleetcode"
    print(solution.firstUniqChar(s))  # 輸出：2
