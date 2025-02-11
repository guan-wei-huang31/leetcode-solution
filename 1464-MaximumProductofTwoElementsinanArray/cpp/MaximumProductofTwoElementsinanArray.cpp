class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for (auto num : nums){
            if (num >= a) {
                b = a;
                a = num;
            }
            else{
                b = max(b,num);
            } 
        }
        return (a-1)*(b-1);
    }
};