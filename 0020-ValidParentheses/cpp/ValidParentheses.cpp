class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map_close = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char>st;
        for (auto e : s){
            if(!map_close.count(e)){
                st.push(e);
            }else{
                if (st.empty() || map_close[e] != st.top()){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};