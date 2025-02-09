class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>hashmap;
        int result = 0;
        for(auto num : nums){
            if(hashmap.count(num)){
                result += hashmap[num];
            }
            hashmap[num]++;
        }
        return result;
    }
};