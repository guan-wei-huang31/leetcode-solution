class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;
        for(string element : strs){
            string word = element;
            sort(begin(word),end(word));
            map[word].push_back(element);
        }
        vector<vector<string>> result;
        for (auto pair : map){
            result.push_back(pair.second);
        }
        return result;
    }
};