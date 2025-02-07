class Solution {
public:
    int trap(vector<int>& height) {
        int ptr_l = 0;
        int ptr_r = height.size() - 1;
        int max_l = 0, max_r = 0, total = 0;
        while(ptr_l < ptr_r){
            if(height[ptr_l] < height[ptr_r]){
                if(height[ptr_l] >= max_l){
                    max_l = height[ptr_l];
                }else{
                    total += max_l - height[ptr_l];
                }
                ptr_l++;
            }else{
                if(height[ptr_r] >= max_r){
                    max_r = height[ptr_r];
                }else{
                    total += max_r - height[ptr_r];
                }
                ptr_r--;
            }
        }
        return total;
    }
};
