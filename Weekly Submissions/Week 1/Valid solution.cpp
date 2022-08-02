class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> s;
        // Rows
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.')
                    continue;
                if(s.find(board[i][j]) != s.end())
                    return false;
                s.insert(board[i][j]);
            }
            s.clear();
        }
        
        // Columns
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[j][i] == '.')
                    continue;
                if(s.find(board[j][i]) != s.end())
                    return false;
                s.insert(board[j][i]);
            }
            s.clear();
        }
        
        // Grid
        for(int gRow = 0; gRow < 9; gRow+=3) {
            for(int gCol = 0; gCol < 9; gCol+=3) {
                for(int i = gRow; i < gRow+3; i++) {
                    for(int j = gCol; j < gCol+3; j++) {
                        if (board[i][j] == '.') {
                            continue;
                        }
                        auto it = s.find(board[i][j]);
                        if (it != s.end()) {
                            return false;
                        } else {
                            s.insert(board[i][j]);
                        }
                    }
                }
                s.clear();
            }
        }
        return true;
    }
};