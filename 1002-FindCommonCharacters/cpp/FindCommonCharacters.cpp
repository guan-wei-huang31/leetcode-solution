#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        if (words[0].size() == 0){
            return result;
        }
        int hashmap1[26]{};
        for(char c: words[0]){
            hashmap1[c - 'a']++;
        }
       for (int i = 1; i < words.size(); i++) {
            int hashmap2[26]{};
            for (char c : words[i]) {
                hashmap2[c - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                hashmap1[k] = min(hashmap1[k], hashmap2[k]);
            }
        }

        for (int i = 0; i < 26; i++) {
            while (hashmap1[i] != 0) { 
                result.push_back(string(1, i + 'a'));
                hashmap1[i]--;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<string> words = {"bella", "label", "roller"};
    
    vector<string> output = solution.commonChars(words);
    
    cout << "Output: [";
    for (size_t i = 0; i < output.size(); i++) {
        cout << "\"" << output[i] << "\"";
        if (i < output.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}