#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int xstart = 0;
        int ystart = 0;
        int offset = 1;
        int loop = n/2;
        int mid = n/2;
        int count = 1;
        int i,j;
        while(loop--){
            i = xstart;
            j = ystart;
            for(j; j < n - offset; j++){
                res[i][j] = count++;
            }
            for(i; i < n - offset; i++){
                res[i][j] = count++;
            }
            for(j; j > ystart; j--){
                res[i][j] = count++;
            }
            for(i; i > xstart; i--){
                res[i][j] = count++;
            }
            xstart++;
            ystart++;
            offset++;
        }
        if(n % 2){
            res[mid][mid] = count;
        }
        return res;
    }
};
int main() {
    Solution s1;
    int n = 3;
	vector<vector<int>> result = s1.generateMatrix(n);

    // Print the resulting matrix
    cout << "Generated Spiral Matrix:" << endl;
    for (const auto& row : result) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}