#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int ptr_l=0;
        int ptr_r=s.size()-1;
        while(ptr_l<ptr_r){
            char tmp = s[ptr_l];
            s[ptr_l] = s[ptr_r];
            s[ptr_r] = tmp;
            ptr_l++;
            ptr_r--;
        }
    }
};

int main() {
    Solution solution;
    vector<char> s = { 'h', 'e', 'l', 'l', 'o' };
    solution.reverseString(s);

    // Print the reversed string
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
