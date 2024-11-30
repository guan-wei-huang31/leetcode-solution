class Solution:
    def isValid(self, s: str) -> bool:
        close_to_open = {")": "(", "}": "{", "]": "["}
        stack = []

        for c in s:
            if c not in close_to_open:
                stack.append(c)
            else:
                if stack and stack[-1] == close_to_open[c]:
                    stack.pop()
                else:
                    return False
        return stack == []


if __name__ == "__main__":
    solution = Solution()

    s = "([])"
    result = solution.isValid(s)
    print(f"Input: s = \"{s}\"\nOutput: {result}")
