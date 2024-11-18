class Solution:
    def __init__(self):
        pass

    def reverseWords(self, s: str) -> str:
        slist = s.split(" ")
        for i in range(len(slist)):
            left = 0
            right = len(slist[i]) - 1
            sub = list(slist[i])
            while left < right:
                sub[left], sub[right] = sub[right], sub[left]
                left += 1
                right -= 1
            slist[i] = "".join(sub)
        return " ".join(slist)


def main():
    solution = Solution()
    s = "Let's reverse words in this string!"
    reversed_string = solution.reverseWords(s)

    print("Original String:", s)
    print("Reversed Words String:", reversed_string)


if __name__ == "__main__":
    main()
