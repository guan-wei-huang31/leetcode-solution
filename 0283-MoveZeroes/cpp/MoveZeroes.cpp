#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos++] = nums[i];
            }
        }
       
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 0, 1, 0, 3, 12 };

    cout << "Before moveZeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.moveZeroes(nums);

    cout << "After moveZeroes:  ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
