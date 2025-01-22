#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                break;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            unordered_set<int> set;

            for (int k = i + 1; k < nums.size(); k++) {
                if (k > i + 2 && nums[k] == nums[k - 1] && nums[k - 1] == nums[k - 2])
                    continue;

                int target = 0 - (nums[i] + nums[k]);
                if (set.find(target) != set.end()) {
                    result.push_back({nums[i], target, nums[k]});
                    set.erase(target);
                } else {
                    set.insert(nums[k]);
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> triplets = solution.threeSum(nums);

    cout << "Triplets summing to zero:\n";
    for (const auto& triplet : triplets) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
