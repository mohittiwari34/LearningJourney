class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                
                string row = to_string(board[i][j]) + "r" + to_string(i);
                string col = to_string(board[i][j]) + "c" + to_string(j);
                string box = to_string(board[i][j]) + "b" + to_string(i/3) + to_string(j/3);
                
                if(s.count(row) || s.count(col) || s.count(box))
                    return false;
                
                s.insert(row);
                s.insert(col);
                s.insert(box);
            }
        }
        return true;
    }
};
