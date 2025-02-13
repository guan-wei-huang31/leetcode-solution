class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int len = nums.size();
        vector<int>result(len,1);
        for (int i = 0, acc_pre = 1; i < len; i++){
            result[i] *= acc_pre;
            acc_pre *= nums[i];
        }
        for (int i = len - 1, a_post = 1; i >= 0; i--){
            result[i] *= a_post;
            a_post *= nums[i];
        }
        return result;
    }
};