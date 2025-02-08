class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto num : nums){
            if(to_string(num).size() % 2 == 0){
                count++;
            }
        }
        return count;
    }
};