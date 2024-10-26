#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr_l = 0;
        int ptr_r = nums.size() - 1;
        while (ptr_l <= ptr_r) {
            while (ptr_l <= ptr_r && nums[ptr_r] == val) {
                ptr_r--;
            }
            while (ptr_l <= ptr_r && nums[ptr_l] != val) {
                ptr_l++;
            }
            if (ptr_l < ptr_r) {
                nums[ptr_l] = nums[ptr_r];
                ptr_r--;
                ptr_l++;
            }
        }
        return ptr_l;
    }
};
int main() {
    Solution s1;
    vector<int> nums = { 0, 1, 2, 2, 3, 0, 4, 2 };
    int val = 2;
    int Output = s1.removeElement(nums, val);

    cout << "Array after removal: ";
    for (int i = 0; i < Output; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New length: " << Output << endl;
}