class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>result(n,0);
        stack<int>stk;
        for(int i = 0; i < n; i++){
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()]){
                int pre = stk.top();
                result[pre] = i - pre;
                stk.pop();
            }
            stk.push(i);
        }
        return result;
    }
};
