#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int ptr_even = 0;
        int ptr_odd = 1;
        int sizeOfNums = nums.size();
        while(ptr_even < sizeOfNums && ptr_odd < sizeOfNums){
            if (nums[ptr_even] % 2 == 0){
                ptr_even += 2;
            }
            else if (nums[ptr_odd] %2 == 1){
                ptr_odd += 2;
            }
            else {
                swap(nums[ptr_even],  nums[ptr_odd]);
                ptr_even += 2;
                ptr_odd += 2; 
            }
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 4, 2, 5, 7 };
    solution.sortArrayByParityII(nums);

    // Print the array in the desired format
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) { // Add a comma between elements except the last one
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}