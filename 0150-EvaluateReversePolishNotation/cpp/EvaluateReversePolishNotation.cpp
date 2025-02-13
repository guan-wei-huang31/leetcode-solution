class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        int result = 0;
        for (auto num : tokens){
            if (isdigit(num[0]) || (num[0] == '-' && num.size() > 1)) {  
                stk.push(stoi(num));
            }else{
                result = stk.top();
                stk.pop();
                int b = stk.top();
                stk.pop();
                if (num == "+") stk.push(b + result);
                else if (num == "-") stk.push(b - result);
                else if (num == "*") stk.push(b * result);
                else stk.push(b / result);
            }
        }
        return stk.top();
    }
};