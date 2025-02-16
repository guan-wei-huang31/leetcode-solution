class Solution {
public:
    int maxPower(string s) {
        int result = 1;
        int sub = 1;
        for (int i = 1; i < s.size(); i++){
            if (s[i] == s[i-1]){
                sub++;
            }else{
                sub = 1;
            }
            result = max(result, sub);
        }
        return result;
    }
};