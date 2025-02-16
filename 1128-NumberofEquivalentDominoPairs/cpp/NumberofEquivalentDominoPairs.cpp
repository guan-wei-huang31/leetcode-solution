class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int>hashmap;
        int count = 0;
        for (auto num : dominoes){
            int key = min(num[0],num[1])*10+max(num[0],num[1]);
            count+=hashmap[key];
            hashmap[key]++;
        } 
        return count;
    }
};