bool isPalindrome(char* s) {
    int ptr_l = 0;
    int ptr_r = strlen(s) - 1;
    while (ptr_l < ptr_r) {
        // Check if alnum and left ptr < right ptr
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