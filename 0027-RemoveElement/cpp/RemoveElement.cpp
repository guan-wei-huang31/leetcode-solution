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
