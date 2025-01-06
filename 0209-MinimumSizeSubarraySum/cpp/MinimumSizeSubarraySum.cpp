#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT32_MAX;
        int sum = 0;
        int sublength = 0;
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while (sum >= target){
                sublength = j - i +1;
                length = sublength < length ? sublength : length;
                sum -= nums[i++];
            }
        }
        return length == INT32_MAX ? 0 : length;
    }
};


int main(){
	Solution solution;
	int target = 7;
	vector<int> nums = {2,3,1,2,4,3};
	int result = solution.minSubArrayLen(target, nums);
	
	cout << "The minimum length of a subarray with sum >= " << target << " is: " << result << endl;

    return 0;
}