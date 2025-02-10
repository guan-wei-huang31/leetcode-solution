class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>hashset;
        int eat = candyType.size() / 2;
        for (auto num : candyType){
            hashset.insert(num);
        }
        return min(eat, (int)hashset.size());
    }
};