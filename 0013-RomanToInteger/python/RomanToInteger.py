class Solution:
    def romanToInt(self, s: str) -> int:
        sym = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        ans = 0
        for i in range(0, len(s)-1):
            if sym[s[i]] < sym[s[i+1]]:
                ans -= sym[s[i]]
            else:
                ans += sym[s[i]]
        return ans + sym[s[-1]]

if __name__ == "__main__":

    solution = Solution()

    roman_numeral = "MCMXCIV"  
    result = solution.romanToInt(roman_numeral)
    print(f"The integer value of the Roman numeral '{roman_numeral}' is {result}.")