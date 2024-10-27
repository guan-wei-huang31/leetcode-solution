#include <stdio.h>
#include <stdbool.h> 
#include <ctype.h>   
#include <string.h>

bool isPalindrome(char* s) {
    int ptr_l = 0;
    int ptr_r = strlen(s) - 1;
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

int main() {
    char str[] = "A man, a plan, a canal: Panama";

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}