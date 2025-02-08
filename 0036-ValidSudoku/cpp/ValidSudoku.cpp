class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>col[9],row[9],box[9];
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                char num = board[i][j];
                int boxIndex = (i/3) * 3 + j / 3;
                if (col[j].count(num) || row[i].count(num) || box[boxIndex].count(num)){
                    return false;
                }
                col[j].insert(num);
                row[i].insert(num);
                box[boxIndex].insert(num);
            }
        }
        return true;
    }
};