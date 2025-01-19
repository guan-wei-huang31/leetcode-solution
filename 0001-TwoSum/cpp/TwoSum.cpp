#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            auto index = hashmap.find(target - nums[i]);
            if (index != hashmap.end()) {
                return {index->second, i};
            }
            hashmap.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2, 7, 11, 15}; 
    int target = 9;                  

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Numbers: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
