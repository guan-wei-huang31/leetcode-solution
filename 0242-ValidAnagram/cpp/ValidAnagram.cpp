#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        int map[26]{};
        for (int i = 0; i < s.length(); i++){
            map[s[i]-'a'] += 1;
        }
        for (int i = 0; i < t.length(); i++){
            map[t[i]-'a'] -= 1;
        }
        for (int i = 0; i < 26; i++){
            if (map[i] != 0){
                return false; 
            }
        }
        return true; 
    }
};

int main() {
    int main() {
    Solution solution;

    string s1 = "anagram";
    string t1 = "nagaram";
    if (solution.isAnagram(s1, t1)) {
        cout << "\"" << s1 << "\" and \"" << t1 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << s1 << "\" and \"" << t1 << "\" are not anagrams." << endl;
    }

    return 0;
}
