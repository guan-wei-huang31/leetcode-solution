class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxResult = 0;
        int ptr_l = 0;
        int ptr_r = heights.size() - 1;
        while(ptr_l < ptr_r) {
            int h = min(heights[ptr_l], heights[ptr_r]);
            maxResult = max(maxResult, (ptr_r-ptr_l)*h);
            if(heights[ptr_l] <= heights[ptr_r]){
                ptr_l++;
            }else{
                ptr_r--;
            }
        }
        return maxResult;
    }
};