class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0; 
        
        vector<int> freq(26, 0);
        int count = 0;
        int start = 0;

        for (int end = 0; end < s.size(); end++) {
            freq[s[end] - 'a']++;
            
            if (end - start + 1 > 3) {
                freq[s[start] - 'a']--;
                start++;
            }
            if (end - start + 1 == 3 && 
                freq[s[start] - 'a'] == 1 && 
                freq[s[start + 1] - 'a'] == 1 && 
                freq[s[start + 2] - 'a'] == 1) {
                count++;
            }
        }

        return count;
    }
};
