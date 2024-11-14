class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dic = {}
        if len(s) != len(t):
            return False
        for num in s:
            dic[num] = dic.get(num, 0) + 1
        for tnum in t:
            if tnum not in dic:
                return False
            dic[tnum] -= 1
            if dic[tnum] < 0:
                return False
        return True

if __name__ == "__main__":

    solution = Solution()
    s = "listen"
    t = "silent"

    result = solution.isAnagram(s, t)

    print(result)
