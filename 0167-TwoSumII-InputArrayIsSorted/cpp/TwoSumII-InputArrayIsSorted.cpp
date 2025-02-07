class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ptr_l = 0;
        int ptr_r = numbers.size() -1;
        while(ptr_l < ptr_r){
            int sum = numbers[ptr_l] + numbers[ptr_r];
            if (sum == target) return {ptr_l+1, ptr_r+1};
            else if (sum < target) ptr_l++;
            else if (sum > target) ptr_r--;
        }
        return {};
    }
};

