#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int ptr_l = 0;
        int ptr_r = s.length() - 1;
        while (ptr_l < ptr_r) {
            while (ptr_l < ptr_r && !isalnum(s[ptr_l])) {
                ptr_l++;
            }
            while (ptr_l < ptr_r && !isalnum(s[ptr_r])) {
                ptr_r--;
            }
            if (tolower(s[ptr_l]) != tolower(s[ptr_r])) {
                return false;
            }
            ptr_l++;
            ptr_r--;
        }
        return true; 
        }
};

int main() {
    Solution solution;
    string str = "A man, a plan, a canal: Panama";

    if (solution.isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}