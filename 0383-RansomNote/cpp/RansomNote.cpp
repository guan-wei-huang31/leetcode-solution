#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hashmap[26]{};
        if (magazine.length()<ransomNote.length()) return false;
        for (int i = 0; i < ransomNote.length(); i++){
            hashmap[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i <magazine.length(); i++){
            hashmap[magazine[i]-'a']--;
        }
        for (int i = 0; i < 26; i++){
            if (hashmap[i] > 0) return false;
        }
        return true;
    }
};
int main() {
    Solution solution;

    string ransomNote1 = "a";
    string magazine1 = "b";
    cout << "Test 1: " << (solution.canConstruct(ransomNote1, magazine1) ? "true" : "false") << endl;

    return 0;
}
