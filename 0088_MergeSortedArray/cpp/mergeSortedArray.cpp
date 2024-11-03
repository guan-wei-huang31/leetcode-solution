class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr_1 = m - 1;
        int ptr_2 = n - 1;
        int ptr_f = m + n - 1;
        
        while (ptr_2 >= 0) {
            if (ptr_1 >= 0 && nums1[ptr_1] > nums2[ptr_2]) {
                nums1[ptr_f--] = nums1[ptr_1--];
            } else {
                nums1[ptr_f--] = nums2[ptr_2--];
            }
        }
    }
};