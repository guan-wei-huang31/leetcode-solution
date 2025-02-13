class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>map;
        for(int x : nums){
            map[x]++;
        }
        vector<pair<int,int>> freq;
        for(auto p : map){
            freq.push_back({p.second,p.first});
        }
        sort(freq.rbegin(),freq.rend());
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(freq[i].second);
        }
        return result;
    }
};