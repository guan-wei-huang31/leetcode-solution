#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        
        return false;        
    }
};

int main() {
    Solution solution;
    vector<int> test = {1, 2, 3, 1};

    cout << "Test : " << (solution.containsDuplicate(test2) ? "True" : "False") << endl;

    return 0;
}
