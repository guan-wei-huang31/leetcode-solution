class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        slist = list(s)
        for i in range(0,len(s),2*k):
            l = i
            r = min(i + k -1,len(slist)-1)
            while l < r:
                slist[l], slist[r] = slist[r], slist[l]
                l += 1
                r -= 1
        return ''.join(slist)
        
if __name__ == "__main__":
    solution = Solution()

    s = "abcdefghij"
    k = 2
    result = solution.reverseStr(s, k)
    print(f"Input: s = \"{s}\", k = {k}\nOutput: {result}")
