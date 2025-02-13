class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        unordered_set<int>set;
        for ( int num : nums){
            set.insert(num);
        }
        int longest = 1;
        for (int num : nums ){
            if (!set.count(num-1)){
                int current = num;
                int currentLen = 1;
                while(set.erase(num+1)){
                    num++;
                    currentLen++;
                }
                longest = max(longest, currentLen);
            }
        }
        return longest;
    }
};